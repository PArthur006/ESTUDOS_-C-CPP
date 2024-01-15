#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um algoritmo que leia 3 valores e informe se eles são
    //iguais entre si para formarem os lados de um triângulo equilátero.
void main(){
    setlocale(LC_ALL, "");
    int ladoA, ladoB, ladoC;
    printf("Informe o comprimento do lado A: ");
    scanf("%d", &ladoA);
    printf("Informe o comprimento do lado B: ");
    scanf("%d", &ladoB);
    printf("Informe o comprimento do lado C: ");
    scanf("%d", &ladoC);

    if (ladoA == ladoB && ladoB == ladoC){
        printf("\nO triângulo é equilátero");
    }
    else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
        printf("\nO triângulo é isósceles");
    }
    else{
        printf("\nO triângulo é escaleno");
    }
    printf("\n");
system("pause");
}
