 #include <stdio.h>

int main() {
    int map[5];
   for(int i = 0; i < 5; i++ ){
       printf("informe o valor: ");
        scanf("%d",&map[i]);

   }
    for(int i = 0; i < 5; i++){
        printf("%d",map[i]);
    }
    return 0;
}

/* Programa para ler e imprimir um array de inteiros.
 * 
 * O programa declara um array de inteiros chamado 'map' com capacidade para 5 elementos. 
 * Ele utiliza um loop para solicitar ao usuário que informe 5 valores, armazenando-os no array. 
 * Em seguida, outro loop é usado para imprimir os valores armazenados no array.
 * 
 * Autor: [Pedro simão]
 * Data: [21/05/2026]
 */

 #include <stdio.h>

int main() {
    int map[5];
   for(int i = 0; i < 5; i++ ){
       printf("informe o valor: ");
        scanf("%d",&map[i]);

   }
    for(int i = 4; i >= 0; i--){
        printf("%d ",map[i]);
    }
    return 0;
}

/* Programa para ler e imprimir um array de inteiros em ordem inversa.
 * 
 * O programa declara um array de inteiros chamado 'map' com capacidade para 5 elementos. 
 * Ele utiliza um loop para solicitar ao usuário que informe 5 valores, armazenando-os no array. 
 * Em seguida, outro loop é usado para imprimir os valores armazenados no array em ordem inversa.
 * 
 * Autor: [Pedro simão]
 * Data: [21/05/2026]
 */

 // Online C compiler to run C program online
#include <stdio.h>

int main() {
    int map[5];
    int maior = 0;
    int ind = 0;
    
   for(int i = 0; i < 5; i++){
       printf("informe o valor: ");
        scanf("%d",&map[i]);
         if(map[i] >= map[ind]){
             ind = i;
             
         }
   }
    printf("%d ",ind);
    
    return 0;
}

/* Programa para encontrar o índice do maior valor em um array de inteiros.
 * 
 * O programa declara um array de inteiros chamado 'map' com capacidade para 5 elementos. 
 * Ele utiliza um loop para solicitar ao usuário que informe 5 valores, armazenando-os no array. 
 * Durante a leitura dos valores, o programa compara cada elemento com o maior valor encontrado até o momento, 
 * atualizando o índice do maior valor. No final, o programa imprime o índice do maior valor encontrado no array.
 * 
 * Autor: [Pedro simão]
 * Data: [21/05/2026]
 */