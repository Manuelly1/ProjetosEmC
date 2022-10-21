// código usando struct e ponteiros inspirado em uma vídeo aula para visualizar a estrutura do struct
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    //criação da variável usuário

    //tipo de dado definido pelo usuário:
    struct usuario
    {
        char nome [30];
        char email [30];
        char dataNascimento [20];
    };

    //criando uma variável que irá substituir as outras 3 acima, ou seja, que armazenará a sintaxe
    //neste caso, a variável é "usuario1", ou seja, nela vai ter nome, email e dataNascimento
    //o ponteiro que vem após a variável é um endereço de memória que vai apontar para essa varável
    //*ptr_usuario1 é um ponteiro que tem um endereço de um variável do tipo struct usuario
    struct usuario usuario1, *ptr_usuario1;

    //leitura de dados do usuário. Não trabalhar diretamente com a variável usuario1, mas sim com o endereço dela
    ptr_usuario1 = &usuario1;
    printf("\n Nome: ");
    //scanf("%s", &usuario1); - assim fica errado, pois só está passando o endereço da struct e não do campo
    //precisamos que o scanf passe o endereço do campo dentro da struct, logo, o certo é:
    scanf("%s", ptr_usuario1-> nome); //usa -> para acessar um endereço dentro de ptr_usuario1
    printf("\n Email: ");
    scanf("%s", ptr_usuario1-> email);
    printf("\n Data de nascimento: ");
    scanf("%s", ptr_usuario1-> dataNascimento);    

    //exibir dados coletados
    printf("--------------- CADASTRO DO USUÁRIO! ---------------");
    printf("Nome do usuário: %s", ptr_usuario1 -> nome); //precisa passar para o printf a variável que ficará no lugar do %s
    printf("Email do usuário: %s", ptr_usuario1 -> email);
    printf("Data de nascimento do usuário: %s", ptr_usuario1 -> dataNascimento);
    
    return 0;

}
