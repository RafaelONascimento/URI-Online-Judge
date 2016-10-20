#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int diaInicial = 0, diaFinal = 0;
    int horaInicial = 0, horaFinal = 0;
    int minutoInicial = 0, minutoFinal = 0, segundoInicial = 0, segundoFinal = 0;
    int dia = 0, hora = 0, minuto = 0, segundo = 0;
    double valorInicial = 0;
    double valorFinal = 0;
    double valorGeral = 0;
    char diaString[9];
 
    scanf("%s %d",diaString,&diaInicial);
    scanf("%d %s %d %s %d",&horaInicial,diaString, &minutoInicial,diaString, &segundoInicial);
    scanf("%s %d",diaString,&diaFinal);
    scanf("%d %s %d %s %d",&horaFinal,diaString, &minutoFinal,diaString, &segundoFinal);
 
    valorFinal = ((((diaFinal * 86400) + (horaFinal * 3600)) + (minutoFinal * 60)) + segundoFinal);
    valorInicial = ((((diaInicial * 86400) + (horaInicial * 3600)) + (minutoInicial * 60)) + segundoInicial);
         
    valorGeral = (valorFinal - valorInicial);
 
    dia = (valorGeral/86400.00);
    valorGeral -= (86400 * dia);
    hora = (valorGeral/3600);
    valorGeral -= (3600 * hora);
    minuto = (valorGeral/60);
    valorGeral -= (minuto * 60);
    segundo = valorGeral;   
 
    printf("%d dia(s)\n",dia);
    printf("%d hora(s)\n",hora);
    printf("%d minuto(s)\n",minuto);
    printf("%d segundo(s)\n",segundo);
 
    return 0;
}
