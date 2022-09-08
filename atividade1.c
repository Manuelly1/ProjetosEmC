#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva uma função em linguagem C que receba três valores inteiros correspondentes a uma data 
(dia, mês e ano) e retorne 1 se a data informada for válida ou 0 se for uma data inválida. Considere a 
possibilidade do ano ser bissexto e, para isso, escreva também uma função bissexto() que retorna 0 ou
1 indicando se o ano informado como parâmetro é bissexto ou não. 
*/

//Código que o professor da disciplina de Programação - Flavius Gorgonio deu em sala

int dataValida (int dia, int mes, int ano) {
   int maiorDia;

   if (ano < 0 || mes < 1 || mes > 12 || dia < 1) {
    return 0;
   }

   if (mes == 2) {
    if (bissexto(ano)) {
        maiorDia = 29;
    } 

    else {
        maiorDia = 28;
    }
   }

   else if (mes == 4 || mes == 6 || mes == 0 || mes == 11) {
    maiorDia = 30;
   } 

   else {
    maiorDia = 31;
   } 

   if (dia > maiorDia) {
    return 0;
   }
   return 1;
}    
    
int bissexto(int ano) {
    if ((ano % 4 == 0) && (ano % 100 != 0)) {
        return 1;
    } 

    else if (ano % 400 == 0) {
        return 1;
        
    } else {
        return 0;
    }
}

