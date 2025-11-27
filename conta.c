#include "conta.h"

// Função auxiliar para obter data e hora formatadas
void obter_data_hora(char *buffer, size_t tamanho) {
    time_t tempo_atual;
    struct tm *info_tempo;
    time(&tempo_atual);
    info_tempo = localtime(&tempo_atual);
    strftime(buffer, tamanho, FORMATO_DATA, info_tempo);
}

// Função auxiliar para registrar uma transação
void registrar_transacao(Transacao log[], int *num_transacoes, TipoTransacao tipo, long long valor, long long saldo_c, long long saldo_p, const char *destino) {
    if (*num_transacoes >= MAX_TRANSACOES) {
        printf("[ALERTA] Capacidade de registros atingida (%d transacoes). O servico do VoidBank saira do ar agora.\n", MAX_TRANSACOES);
        return;
    }
    
    Transacao nova_transacao;
    nova_transacao.tipo = tipo;
    nova_transacao.valor = valor;
    nova_transacao.saldo_corrente_apos = saldo_c;
    nova_transacao.saldo_poupanca_apos = saldo_p;
    if (destino != NULL) {
        strncpy(nova_transacao.destino, destino, MAX_CHAVE_DESTINO - 1);
        nova_transacao.destino[MAX_CHAVE_DESTINO - 1] = '\0';
    } else {
        nova_transacao.destino[0] = '\0';
    }
    
    obter_data_hora(nova_transacao.quando, sizeof(nova_transacao.quando));
    
    log[*num_transacoes] = nova_transacao;
    (*num_transacoes)++;
}

// 1. Depositar
void depositar(long long *saldo_corrente, long long saldo_poupanca, Transacao log[], int *num_transacoes) {
    long long valor;
    printf("Digite o valor a depositar (em centavos): ");
    scanf("%lld", &valor);
    if (valor > 0) {
        *saldo_corrente += valor;
        registrar_transacao(log, num_transacoes, DEP, valor, *saldo_corrente, saldo_poupanca, NULL);
        printf("Deposito de %lld centavos realizado com sucesso.\n", valor);
    } else {
        printf("Valor de deposito invalido.\n");
    }
}

// 2. Sacar
void sacar(long long *saldo_corrente, long long saldo_poupanca, Transacao log[], int *num_transacoes) {
    long long valor;
    printf("Digite o valor a sacar (em centavos): ");
    scanf("%lld", &valor);
    if (valor > 0 && *saldo_corrente >= valor) {
        *saldo_corrente -= valor;
        registrar_transacao(log, num_transacoes, SAQ, valor, *saldo_corrente, saldo_poupanca, NULL);
        printf("Saque de %lld centavos realizado com sucesso.\n", valor);
    } else {
        printf("Valor de saque invalido ou saldo insuficiente.\n");
    }
}

// 3. Aplicar na poupança (NOVA)
void aplicar_poupanca(long long *saldo_corrente, long long *saldo_poupanca, Transacao log[], int *num_transacoes) {
    long long valor;
    printf("Digite o valor a aplicar na poupanca (em centavos): ");
    scanf("%lld", &valor);
    if (valor > 0 && *saldo_corrente >= valor) {
        *saldo_corrente -= valor;
        *saldo_poupanca += valor;
        registrar_transacao(log, num_transacoes, APLI, valor, *saldo_corrente, *saldo_poupanca, NULL);
        printf("Aplicacao de %lld centavos na poupanca realizada com sucesso.\n", valor);
    } else {
        printf("Valor de aplicacao invalido ou saldo insuficiente.\n");
    }
}

// 4. Resgatar da poupança (NOVA)
void resgatar_poupanca(long long *saldo_corrente, long long *saldo_poupanca, Transacao log[], int *num_transacoes) {
    long long valor;
    printf("Digite o valor a resgatar da poupanca (em centavos): ");
    scanf("%lld", &valor);
    if (valor > 0 && *saldo_poupanca >= valor) {
        *saldo_poupanca -= valor;
        *saldo_corrente += valor;
        registrar_transacao(log, num_transacoes, RESG, valor, *saldo_corrente, *saldo_poupanca, NULL);
        printf("Resgate de %lld centavos da poupanca realizado com sucesso.\n", valor);
    } else {
        printf("Valor de resgate invalido ou saldo insuficiente na poupanca.\n");
    }
}

// 6. Consultar saldos (já implementada)
void consultar_saldos(long long saldo_corrente, long long saldo_poupanca) {
    printf("Saldo Conta Corrente: %lld centavos\n", saldo_corrente);
    printf("Saldo Poupanca: %lld centavos\n", saldo_poupanca);
}

// 7. Imprimir Extrato (ATUALIZADA)
void extrato(Transacao log[], int num_transacoes) {
    printf("--- EXTRATO VOIDBANK ---\n");
    if (num_transacoes == 0) {
        printf("Nenhuma transacao registrada.\n");
        return;
    }
    for (int i = 0; i < num_transacoes; i++) {
        printf("[%s] ", log[i].quando);
        switch (log[i].tipo) {
            case DEP:
                printf("DEPOSITO de %lld centavos. Saldo CC: %lld, Saldo PP: %lld\n", log[i].valor, log[i].saldo_corrente_apos, log[i].saldo_poupanca_apos);
                break;
            case SAQ:
                printf("SAQUE de %lld centavos. Saldo CC: %lld, Saldo PP: %lld\n", log[i].valor, log[i].saldo_corrente_apos, log[i].saldo_poupanca_apos);
                break;
            case APLI:
                printf("APLICACAO de %lld centavos. Saldo CC: %lld, Saldo PP: %lld\n", log[i].valor, log[i].saldo_corrente_apos, log[i].saldo_poupanca_apos);
                break;
            case RESG:
                printf("RESGATE de %lld centavos. Saldo CC: %lld, Saldo PP: %lld\n", log[i].valor, log[i].saldo_corrente_apos, log[i].saldo_poupanca_apos);
                break;
            default:
                // Tipos de transação ainda não implementados
                break;
        }
    }
}
