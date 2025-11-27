#ifndef CONTA_H
#define CONTA_H

#include <stdio.h>
#include <time.h>
#include <string.h>

#define MAX_TRANSACOES 100
#define MAX_CHAVE_DESTINO 50
#define FORMATO_DATA "%Y-%m-%d %H:%M:%S"

// Tipos de transação
typedef enum {
    DEP,
    SAQ,
    APLI,
    RESG,
    PIX,
    REND,
    PIX_RECEBIDO
} TipoTransacao;

// Estrutura para uma transação
typedef struct {
    TipoTransacao tipo;
    long long valor; // Valor em centavos
    long long saldo_corrente_apos;
    long long saldo_poupanca_apos;
    char destino[MAX_CHAVE_DESTINO];
    char quando[20]; // Formato YYYY-MM-DD HH:MM:SS
} Transacao;

// Protótipos das funções
void obter_data_hora(char *buffer, size_t tamanho);
void registrar_transacao(Transacao log[], int *num_transacoes, TipoTransacao tipo, long long valor, long long saldo_c, long long saldo_p, const char *destino);
void depositar(long long *saldo_corrente, long long saldo_poupanca, Transacao log[], int *num_transacoes);
void sacar(long long *saldo_corrente, long long saldo_poupanca, Transacao log[], int *num_transacoes);
void aplicar_poupanca(long long *saldo_corrente, long long *saldo_poupanca, Transacao log[], int *num_transacoes);
void resgatar_poupanca(long long *saldo_corrente, long long *saldo_poupanca, Transacao log[], int *num_transacoes);
void consultar_saldos(long long saldo_corrente, long long saldo_poupanca);
void extrato(Transacao log[], int num_transacoes);

#endif
