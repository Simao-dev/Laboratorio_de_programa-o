// Online C compiler to run C program online
#include <stdio.h>

int primo(int n){
    int cont = 0;
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    if (cont <= 2){
        return 1;
    }else {
        return 0;
    }
  
}

int main() {

    printf ("%d",primo(2));
    
    return 0;
}



#include <stdio.h>

int primo(int n){
    
    
    for(int i = 2; i < n; i++){
        if(n % i == 0){
           return 0;
        }
    }
    return 1;
  }

int main() {
    
    for(int i = 1; i < 1000; i++){
        if(primo(i)== 1){
            printf("%d\n",i);
        }
    }
    return 0;
}

*/ Função para calcular se um número é primo ou não.
 * 
 * A função primo recebe um número inteiro n e verifica quantos divisores ele possui. 
 * Se o número tiver 2 ou menos divisores, ele é considerado primo e a função retorna 1. 
 * Caso contrário, a função retorna 0, indicando que o número não é primo.
 * 
 * Autor: [Pedro simão]
 * Data: [12/05/2026]
 */