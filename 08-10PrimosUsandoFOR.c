#include <stdio.h>
int primo(int n) {
    
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    
    return 1;
}
    
    int main(){
        int nueva;
        printf("digite qlq numero p/ ver se eh primo : ");
        scanf("%d" , &nueva);
        printf("Resultado : %d\n", primo(nueva));
    }
