# include <stdio.h>
int main(){
    int hora;
    printf("Digite um horario do dia: ");
    scanf("%d", &hora);

    if (hora < 12){
        printf("Bom dia!\n");
    }
    else{
        printf("boa tarde");
    }
    return 0;
    }

