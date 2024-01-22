#include <stdio.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

    /*Escreva um programa que contenha duas vari�veis inteiras.
    Compare seus endere�os e exiba o maior endere�o.*/

int main(){

    setlocale(LC_ALL, "");

    //Declarando as vari�veis e os ponteiros.
    int a = 10, b = 20, *pontA, *pontB;

    //Atribuindo os endere�os das vari�veis aos ponteiros.
    pontA = &a;
    pontB = &b;

    //Imprimindo os endere�os na tela.
    printf("\nO endere�o de A � = %d", &a);
    printf("\nO endere�o de B � = %d", &b);

    printf("\n");

    //Condicional que verifica qual dos dois endere�os � maior e imprime na tela.
    if (&a > &b){
        printf("\nO maior endere�o � o de A, que vale %d", pontA);
    }
    else{
        printf("\nO maior endere�o � o de B, que vale %d", pontB);
    }
    printf("\n");

    //C�digo em C++.

    //Declarando as vari�veis e os ponteiros.
    int c = 30, d = 40, *pontC, *pontD;

    //Imprimindo os endere�os na tela.
    cout << "\nO endere�o de C � = " << &c;
    cout << "\nO endere�o de D � = " << &d;

    //Condicional que verifica qual dos dois endere�os � maior e imprime na tela.
    if (pontC < pontD){
        cout << "\nO maior endere�o � o de D, que vale " << &d;
    }
    else{
        cout << "\nO maior endere�o � o de C, que vale " << &c;
    }

    return 0;
}
