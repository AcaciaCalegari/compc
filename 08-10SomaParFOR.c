#include <stdio.h>
int primeiros(int n) {
    
    int somatorio=0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
        somatorio+=i;
        }
    }
    return somatorio;
}
    
    int main(){
        int nueva;
        
        printf("digite numeros : ");
        scanf("%d" , &nueva);
        printf("Resultado : %d\n", primeiros(nueva));
    }
