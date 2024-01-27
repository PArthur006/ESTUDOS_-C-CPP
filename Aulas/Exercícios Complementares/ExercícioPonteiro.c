#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
Elaborar um programa que leia dois valores inteiros(A e B).Em seguida faça uma função
que retorne a soma do dobro dos dois núumeros lidos.A função deverá armazenar o dobro
de A na própria variável A e o dobro de B na própria variável B.
*/

int main(){
    setlocale(LC_ALL, "");

    int a, b, *pA, *pB;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    a = a * 2;
    b = b * 2;
    pA = &a;
    pB = &b;

    printf("A soma do dobro dos dois números lidos é = %d", *pA + *pB);

    return 0;
}
