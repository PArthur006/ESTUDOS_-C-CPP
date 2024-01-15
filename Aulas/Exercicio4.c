#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float n1, n2, n3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("\nA média do aluno foi %.2f", media);

    if(media >= 7){
        printf("\nAluno aprovado!");
    }
    else{
        printf("\nAluno reprovado!\n");
    }
system("pause");
}
