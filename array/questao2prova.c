#include <stdio.h>

int main() {
    int x;
    int vetor[8] = {};
    int cont = vetor[0];
    
    printf("Informe o valor de x: ");
    scanf("%d",&x);
    printf("Informe 8 digitos:\n");
    for (int i = 0; i < 8; i++){
        scanf("%d",&vetor[i]);
    }
    
    
    for(int i = 0; i < 8; i++){
        if (x == vetor[i]){
            cont = i;
        }
    }
    printf("valor econtado na posição %d\n",cont);
    
    for (int i = 0; i < 8; i++){
        if(x== vetor[i]){
            vetor[i] = 0;
        }
    }
    
    printf("valores\n");
    for (int i = 0; i < 8; i++){
        printf("%d\n",vetor[i]);
    }
    
    return 0;
}