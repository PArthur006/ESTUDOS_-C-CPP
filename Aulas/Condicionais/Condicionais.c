#include <stdin.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL, "");
    //Definindo Vari�veis
    int a = 4,opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicional Simples
    if(a == 5){
        printf("\n A variavel a = 5");
    }
    if(b == 2.5){
        printf("\n A variavel b = 2.5");
    }
    if(c == 'x'){
        printf("\n A variavel c = letra x");
    }

    //N�mero par ou impar
    if(a % 2 == 1){
        printf("\n A variavel a � impar");
    }else{
        printf("\n A variavel a � par");
    }

    //Condicional Composta
    if(opcao == 1){
        printf("\nA opcao = 1");
    }else if(opcao == 2){
         printf("\nA opcao = 2");
    }else{
        printf("\nA opcao nao � igual a 1 e nem 2");
    }

    //Pausa o programa ap�s executar
    system("pause");
}
