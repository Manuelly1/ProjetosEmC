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

    ptr_item1 = &item1;
    printf("\n Nome: ");
    scanf("%s", ptr_item1-> nomeItem);
    printf("\n Nome da marca: ");
    scanf("%s", ptr_item1-> nomeMarca);
    printf("\n Código de barras: ");
    scanf("%s", ptr_item1-> codigoBarras);
    printf("\n Data de validade: ");
    scanf("%s", ptr_item1-> dataValidade);    

    printf("--------------- CADASTRO DE ITENS! ---------------");
    printf("Nome do item: %s", ptr_item1 -> nomeItem); 
    printf("Nome da marca: %s", ptr_item1 -> nomeMarca);
    printf("Código de barras do item: %s", ptr_item1 -> codigoBarras);
    printf("Data de validade do item: %s", ptr_item1 -> dataValidade);  
    
    return 0;

}
