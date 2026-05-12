#include <stdio.h>

int main() {
    int segundos = 0;
    int minutos = 0;
    int horas = 0;
    while(segundos <= 59){
        printf("%.2d:%.2d:%.2d\n",horas,minutos,segundos);
        segundos ++;
        if(segundos > 59){
            minutos ++;
            segundos = 0;
        }
        if(minutos > 59){
            minutos = 0;
            horas ++;
        }
        if(horas >= 24){
            break;
        }
    }
    return 0;
}

*/ logica_cronometro.c
 * 
 * Este programa simula um cronômetro, exibindo o tempo decorrido em horas, minutos e segundos. 
 * O cronômetro inicia em 00:00:01 e incrementa os segundos a cada iteração. Quando os segundos atingem 60,
 * eles são resetados para 0 e os minutos são incrementados. Da mesma forma, quando os minutos atingem 60, 
 * eles são resetados para 0 e as horas são incrementadas. O programa continua a exibir o tempo até que as
 *  horas atinjam 24, momento em que o cronômetro é encerrado.
 * 
 * Autor: [Pedro simão]
 * Data: [12/05/2026]
 */