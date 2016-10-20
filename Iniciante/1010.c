#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int codigo[2];
    int qtd[2];
    double valorUnd[2];
    double valorTotal;
 
    scanf("%d %d %lf",&codigo[1],&qtd[1],&valorUnd[1]);
    scanf("%d %d %lf",&codigo[2],&qtd[2],&valorUnd[2]);
    
    valorTotal = ((valorUnd[1] * qtd[1]) + (valorUnd[2]* qtd[2])); 
 
    printf("VALOR A PAGAR: R$ %.2f\n",valorTotal);
 
    return 0;
}
