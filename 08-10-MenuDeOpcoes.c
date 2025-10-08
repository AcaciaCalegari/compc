#include <stdio.h>

int main(){
    
int opcao = 0;
float sa = 0;
while (opcao != 4) {
// Loop continua até a opção 'Sair'
printf("\n--- MENU ---\n");
printf("1. Ver Saldo\n");
printf("2. Realizar Saque\n");
printf("3. Fazer Depósito\n");
printf("4. Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch (opcao) {
case 1:
printf("Saldo R$ %f\n", sa);
break;
case 2:

printf("em desenv.\n");
break;
case 3:

printf("em desenv.\n");
break;
case 4:
printf("Saindo\n");
break;
default:
printf("Opção inválida! Por favor, escolha novamente.\n");
}
}
return 0;
}
