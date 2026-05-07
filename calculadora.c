#include <stdio.h>

void imprimir_menu(){
    printf("1 - SOMA\n");
    printf("2 - SUB\n");
    printf("3 - MULT\n");
    printf("4 - DIV\n");
    printf("0 - SAIR\n");
    printf("Entre com uma opção: ");
}

int soma(int numero1, int numero2){
    return numero1 + numero2;
}

int sub(int numero1, int numero2){
    return numero1 - numero2;
}

int mult(int numero1, int numero2){
    return numero1 * numero2;
}

float divi(float numero1, float numero2){
    return numero1 / numero2;
}

int main() {
    int opcao;
    int n1, n2;
    
    while(opcao != 0){
        imprimir_menu();
        scanf("%d", &opcao);
        
        if(opcao > 0 && opcao < 5){
            printf("Digite o 1ª número: ");
            scanf("%d", &n1);
                
            printf("Digite o 1ª número: ");
            scanf("%d", &n2);
        }
        
        if(opcao == 1){
            printf(": %d\n", soma(n1, n2));
        }else if(opcao == 2){
           printf(": %d\n", sub(n1, n2));
        } else if(opcao == 3){
            printf(": %d\n", mult(n1, n2));
        } else if (opcao == 4){
             printf(": %d\n", divi(n1, n2));
        }else  if (opcao == 0){
            printf("O PROGRAMA ENCERROU.\n");
        }else {
            printf("Opção Inválida.\n");
        }
    }
    
    return 0;
}