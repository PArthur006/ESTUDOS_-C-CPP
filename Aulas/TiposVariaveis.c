#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, ""); //Permite utilizar acentos em conjunto com o 'include <locale.h>'.

    printf("Olá mundo \n"); //Printa algo na tela. O '\n' é utilizado para pular uma linha

    int a = 50; //Define a variável 'a'
    int b = 6; //Define a variável 'b'

    printf("O valor de a é = %d \n", a);
}
