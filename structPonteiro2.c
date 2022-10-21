#include <stdio.h>
#include <stdlib.h>

int main() 
{
    struct item
    {
        char nomeItem [30];
        char nomeMarca [20];
        char codigoBarras [20];
        char dataValidade [30];
    };

    struct item item1, *ptr_item1;

    //leitura de dados do usuário. Não trabalhar diretamente com a variável usuario1, mas sim com o endereço dela
    ptr_item1 = &item1;
    printf("\n Nome: ");
    //scanf("%s", &usuario1); - assim fica errado, pois só está passando o endereço da struct e não do campo
    //precisamos que o scanf passe o endereço do campo dentro da struct, logo, o certo é:
    scanf("%s", ptr_item1-> nomeItem); //usa -> para acessar um endereço dentro de ptr_usuario1
    printf("\n Nome da marca: ");
    scanf("%s", ptr_item1-> nomeMarca);
    printf("\n Código de barras: ");
    scanf("%s", ptr_item1-> codigoBarras);
    printf("\n Data de validade: ");
    scanf("%s", ptr_item1-> dataValidade);    

    //exibir dados coletados
    printf("--------------- CADASTRO DO USUÁRIO! ---------------");
    printf("Nome do usuário: %s", ptr_usuario1 -> nome); //precisa passar para o printf a variável que ficará no lugar do %s
    printf("Email do usuário: %s", ptr_usuario1 -> email);
    printf("Data de nascimento do usuário: %s", ptr_usuario1 -> dataNascimento);
    
    return 0;

}
