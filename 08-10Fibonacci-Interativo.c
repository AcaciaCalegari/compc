#include <stdio.h>
int fibonacci(int n) {
    
 if (n == 0) return 0;
 if (n == 1) return 1;
 
 int n1=1;
 int n2=1;
 int aux;
 

 for (int i =2; i<=n; i++){
   aux = n1 + n2;
   n1 = n2;
   n2 = aux;
   
 }
 
 return aux;
 
}


 int main(){
     printf("fibonacci = %d\n" , fibonacci(5));
 }
