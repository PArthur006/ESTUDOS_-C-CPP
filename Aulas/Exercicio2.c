#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float n1, n2, resultado;
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("\nDIgite outro número: ");
    scanf("%f", &n2);
    resultado = abs(n1 - n2);
    printf("\nA diferença absoluta entre %.2f e %.2f é %.2f", n1, n2, resultado);
    system("pause");
}
