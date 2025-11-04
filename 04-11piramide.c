//04-11-25
//parece uma piramide
//padrao triangular - slide d matrizes e lacos

#include <stdio.h> 

    int main() {
    int i, j;
    
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    //se qser pd add aki um return 0; 
}
