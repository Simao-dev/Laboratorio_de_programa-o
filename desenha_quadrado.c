// Online C compiler to run C program online
#include <stdio.h>

void quadrado(int numero){
    int i = 0;
    while(i <= numero){
        printf("*");
        i++;
    }
}

int main() {
   int numero;
   int cont = 0;
    while (cont < 4){
        quadrado(4);
       printf("\n");
       
        cont ++;
        
    }
    
    return 0;
}