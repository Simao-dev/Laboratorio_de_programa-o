// primeiro exemplo
#include <stdio.h>

int situacao_aluno(int nota){
    if(nota >= 7){
       return 1;
    }else{
       return 0;
    }
}

int main() {
int nota = 7;
int resposta;
resposta = situacao_aluno(nota);

if(resposta == 1){
    printf("Aprovado\n");
}else{
    printf("Reprovado\n");
}

    return 0;
}

//segundo exemplo de função

#include <stdio.h>

int situacao_aluno(float nota){
    if(nota >= 7.0){
        return 1;
    }else{
        return 0;
    }
}

float media_aluno(float avp1, float avp2){
    float resultado;
    resultado = (avp1 + avp2) / 2;
    return resultado;
}

int main() {
    float nota1 = 7.0;
    float nota2 = 5.0;
    float media_final;
    int resposta;
    media_final = media_aluno(nota1, nota2);
    
    resposta = situacao_aluno(media_final);
    
    if(resposta == 1){
        printf("APROVADO\n");
    }else{
        printf("REPROVADO\n");
    }
    
    return 0;
}

//função que verifica se um numer é "ímpar" ou "Par"

#include <stdio.h>

int numero_inte(int n){
    if(n % 2 == 0){
        return 1;
    }else {
        return 0;
    }
}
    
    int main() {
        int n = 2;
        int resultado;
        resultado = numero_inte(n);
        
        if(resultado == 0){
             printf("Ímpar");
        }else {
             printf("Par");
        }
       
    return 0;
}