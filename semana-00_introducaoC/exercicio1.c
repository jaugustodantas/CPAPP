// a ideia desse algoritmo é ler o nome, cidade e idade; 
// esse é somente um aprendizado básico de C
#include <stdio.h>

int main (){

    int idade;
    char cidade[50];
    char nome [50];
    printf("Digite o seu nome: \n");
    scanf("%s", nome);
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("Dgite a sua cidade: \n");
    scanf("%s",cidade);
    printf("Seu nome é %s, voce tem %d anos e mora em %s",nome,idade,cidade);
    return 0;
}