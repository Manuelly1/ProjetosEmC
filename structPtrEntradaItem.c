//para usar na entrada de itens

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    struct entradaItem
    {
        char codigoBarras [20];
        char quantidadeItem [30];
    };

    struct entradaItem entrada1, *ptr_entrada1;

    ptr_entrada1 = &entrada1;
    printf("\n Código de barras: ");
    scanf("%s", ptr_entrada1-> codigoBarras);
    printf("\n Quantidade do item adicionado: ");
    scanf("%s", ptr_entrada1-> quantidadeItem);    

    printf("--------------- ENTRADA DE ITENS! ---------------");
    printf("Código de barras do item: %s", ptr_entrada1 -> codigoBarras);
    printf("Data de validade do item: %s", ptr_entrada1 -> quantidadeItem);  
    
    return 0;

}
