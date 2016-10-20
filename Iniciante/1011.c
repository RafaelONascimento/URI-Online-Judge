#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int raio;
    double pi = 3.14159;
    double volumeEsfera;
    double raioUsual;
 
    scanf("%d",&raio);
 
    raioUsual = raio;
 
    volumeEsfera = (raioUsual*raioUsual*raioUsual);
    volumeEsfera = (volumeEsfera * (pi * 4.0));
    volumeEsfera = (volumeEsfera / 3);
 
    printf("VOLUME = %.3lf\n",volumeEsfera);
 
    return 0;
}
