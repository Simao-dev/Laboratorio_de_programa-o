#include <stdio.h>

int main() {
  int numero;
  int n1 = 0;
  int n2 = 1;
  int resut;

  
  printf("Informe um numero: ");
  scanf("%d",&numero);
  printf("%d\n%d\n",n1,n2);
  
  for (int i = 2; i < numero; i++){
      resut = n1 + n2;
      n1 = n2;
      n2 = resut;
      printf("%d\n",resut);
  }
  

    return 0;
}

#include <stdio.h>


int main() {
    
    int n1 = 0 , n2 = 1;
    int termo_atual;
    int flag = 0;
    
    int alvo = 8;
    
    while(termo_atual <= alvo){
        termo_atual = n1 + n2;
        n1 = n2;
        n2 = termo_atual;
        if (termo_atual == alvo){
           flag = 1;
        }
    }
    
    return 0;
}