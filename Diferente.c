# include <stdio.h>
int main(){
    int x, soma;
    soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    while (x != 0){
        soma += x;
        printf("Digite outro number: ");
        scanf("%d", &x);
    }
    printf("SOMA = %d\n", soma);
    return 0;
}

