// Online C compiler to run C program online
#include <stdio.h>

int calcula_idade(int a,int m,int d){
    return a * 365 + m * 30 + d;
}

int main() {
    printf("%d",calcula_idade(29,6,9));
    
    return 0;
}

/* Função para calcular a idade em dias.
 * 
 * A função calcula_idade recebe três parâmetros: a (anos), m (meses) e d (dias). 
 * Ela calcula a idade total em dias multiplicando os anos por 365, os meses por 30 e somando os dias. 
 * O resultado é retornado como um inteiro representando a idade total em dias.
 * 
 * Autor: [Pedro simão]
 * Data: [12/05/2026]
 */

 //calcula digito
#include <stdio.h>

int calcula(int n){
    int cont = 0;
    
    while(n > 0){
        n = n / 10;
        cont ++;
    }
    return cont;
}

int main() {
    // Write C code here
    printf("%d",calcula(10));

    return 0;
}