#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

int main() {
    long long saldo_corrente = 0;
    long long saldo_poupanca = 0;
    Transacao log[MAX_TRANSACOES];
    int num_transacoes = 0;
    int opcao;

    do {
        if (num_transacoes >= MAX_TRANSACOES) {
            printf("[ALERTA] Capacidade de registros atingida (%d transacoes). O servico do VoidBank saira do ar agora.\n", MAX_TRANSACOES);
            break;
        }

        printf("\n--- VOIDBANK MENU ---\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Aplicar na poupanca\n");
        printf("4. Resgatar da poupanca\n");
        printf("6. Consultar saldos\n");
        printf("7. Extrato\n");
        printf("8. Sair\n");
        printf("---------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                depositar(&saldo_corrente, saldo_poupanca, log, &num_transacoes);
                break;
            case 2:
                sacar(&saldo_corrente, saldo_poupanca, log, &num_transacoes);
                break;
            case 3:
                aplicar_poupanca(&saldo_corrente, &saldo_poupanca, log, &num_transacoes);
                break;
            case 4:
                resgatar_poupanca(&saldo_corrente, &saldo_poupanca, log, &num_transacoes);
                break;
            case 6:
                consultar_saldos(saldo_corrente, saldo_poupanca);
                break;
            case 7:
                extrato(log, num_transacoes);
                break;
            case 8:
                printf("Saindo do VoidBank. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 8);

    return 0;
}
