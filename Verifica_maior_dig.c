
#include <stdio.h>

int calcula(int n){
    int ultimo_digito =0;
    int cont = 0;
    
    while(n > 0){
        ultimo_digito = n % 10;
        n = n / 10;
        if(ultimo_digito > cont){
            cont = ultimo_digito;
        }
    }
    return cont;
}

int main() {
    printf("%d",calcula(255));

    return 0;
}

/* Função para calcular o maior dígito de um número inteiro.
 * 
 * A função calcula recebe um número inteiro n e determina o maior dígito presente nesse número. 
 * Ela utiliza um loop para extrair cada dígito do número, comparando-o com o maior dígito encontrado até o momento. 
 * O resultado é retornado como um inteiro representando o maior dígito do número.
 * 
 * Autor: [Pedro simão]
 * Data: [12/05/2026]
 */