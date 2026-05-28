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

 #include <stdio.h>

int main() {
    int n = 0;
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++){
        if(vetor[i]% 2 == 0){
            n++;
        }
       
    }
     printf("%d",n);
    return 0;
} 

/* Programa para contar o número de elementos pares em um array de inteiros.
 * 
 * O programa declara um array de inteiros chamado 'vetor' com 10 elementos pré-inicializados. 
 * Ele utiliza um loop para iterar sobre os elementos do array, verificando se cada elemento é par (divisível por 2). 
 * Se um elemento for par, o contador 'n' é incrementado. No final, o programa imprime o número total de elementos pares encontrados no array.
 * 
 * Autor: [Pedro simão]
 * Data: [28/05/2026]
 */

 #include <stdio.h>

int main() {
    int n = 0;
    int vetor[10] = {1,-2,3,-4,5,6,-7,8,-9,10};
    for (int i = 0; i < 10; i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
       printf("%d\n",vetor[i]);
    }
     
    return 0;
}

/* Programa para substituir elementos negativos por zero em um array de inteiros.
 * 
 * O programa declara um array de inteiros chamado 'vetor' com 10 elementos pré-inicializados, alguns dos quais são negativos. 
 * Ele utiliza um loop para iterar sobre os elementos do array, verificando se cada elemento é negativo. 
 * Se um elemento for negativo, ele é substituído por zero. O programa também imprime o valor de cada elemento do array após a verificação.
 * 
 * Autor: [Pedro simão]
 * Data: [28/05/2026]
 */

 #include <stdio.h>

int main() {
    int n;
    int resultado = 0;
    int vetor[10] = {1,1,1,1,1,1,1,1,1,1};
    for (int i = 0; i < 10; i++){
        n = vetor[i];
        resultado = resultado + n;
       
    }
    printf("%d\n",resultado);
     
    return 0;
}

/* Programa para calcular a soma dos elementos de um array de inteiros.
 * 
 * O programa declara um array de inteiros chamado 'vetor' com 10 elementos pré-inicializados. 
 * Ele utiliza um loop para iterar sobre os elementos do array, somando cada elemento ao acumulador 'resultado'. 
 * No final, o programa imprime a soma total dos elementos do array.
 * 
 * Autor: [Pedro simão]
 * Data: [28/05/2026]
 */

 #include <stdio.h>

int main() {
    int divi = 0;
    int media =0;
    int resultado = 0;
    int vetor[10] = {1,1,1,1,1,1,1,1,1,10};
    for (int i = 0; i < 10; i++){
        resultado = resultado + vetor[i];
    
    }
     divi = resultado / 10;
     
     for(int i =0; i< 10; i++){
        if (vetor[i] > divi){
            printf("1");
        } else {
            printf("0");
        }
     }
     
    return 0;
}

/* Programa para comparar elementos de um array com a média dos elementos.
 * 
 * O programa declara um array de inteiros chamado 'vetor' com 10 elementos pré-inicializados. 
 * Ele utiliza um loop para calcular a soma total dos elementos do array, armazenando o resultado em 'resultado'. 
 * Em seguida, a média é calculada dividindo a soma pelo número de elementos (10). 
 * Outro loop é usado para comparar cada elemento do array com a média, imprimindo "1" se o elemento for maior que a média e "0" caso contrário.
 * 
 * Autor: [Pedro simão]
 * Data: [28/05/2026]
 */