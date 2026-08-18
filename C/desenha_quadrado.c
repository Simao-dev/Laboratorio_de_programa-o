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


/* Função para desenhar um quadrado de asteriscos.
 * 
 * A função quadrado recebe um número inteiro 'numero' e imprime uma linha de asteriscos (*) correspondente a esse número. 
 * No programa principal, a função é chamada em um loop para desenhar um quadrado de 4 linhas, cada linha contendo 4 asteriscos.
 * 
 * Autor: [Pedro simão]
 * Data: [21/05/2026]
 */

