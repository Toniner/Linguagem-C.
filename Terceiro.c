#include <stdio.h>
#include <string.h>
int main()
{
    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade = 26;
    salario = 6000.1;
    strcpy(nome,"Erik Tonin");
    sexo = 'M';

    printf("Eu sou funcionario %s, sexo %c, com o salario de %.2lf e tenho %d anos\n", nome, sexo, salario, idade);

    return 0;
}
