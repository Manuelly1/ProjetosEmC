#include <stdio.h>
#include <stdlib.h>

int main() 
{
    struct saidaItem
    {
        char codigoBarras [20];
        char quantidadeItem [30];
    };

    struct saidaItem saida1, *ptr_saida1;

    ptr_saida1 = &saida1;
    printf("\n Código de barras: ");
    scanf("%s", ptr_saida1-> codigoBarras);
    printf("\n Quantidade do item adicionado: ");
    scanf("%s", ptr_saida1-> quantidadeItem);    

    printf("--------------- ENTRADA DE ITENS! ---------------");
    printf("Código de barras do item: %s", ptr_saida1 -> codigoBarras);
    printf("Data de validade do item: %s", ptr_saida1 -> quantidadeItem);  
    
    return 0;

}