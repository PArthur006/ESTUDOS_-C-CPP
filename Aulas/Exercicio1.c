//Crie um programa que leia duas notas e imprima a média entre elas.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float n1, n2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("\nA média entre %.2f e %.2f é %.2f", n1, n2, media);
    system("pause");
}
