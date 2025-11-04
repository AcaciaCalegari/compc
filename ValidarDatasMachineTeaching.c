//achoq eh do dia 15-10

#include <stdio.h>

int validar_data(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12) {
        return 0;
    }
    if (dia < 1 || dia > 31) {
        return 0;
    }
    if (ano < 1) {
        return 0;
    }
    
      return 1;
}


//programa minimo p testar, nao precisa usar no machineteaching
int main() {
    return validar_data(15, 8, 2023); // Retorna 1 se válida
}
