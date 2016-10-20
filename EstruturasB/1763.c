#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

void tradutor(string s)
{
  if(s == "brasil" || s == "portugal") 
    printf("Feliz Natal!\n");
  else if(s == "alemanha") 
    printf("Frohliche Weihnachten!\n");
  else if(s == "austria") 
    printf("Frohe Weihnacht!\n");
  else if(s == "coreia") 
    printf("Chuk Sung Tan!\n");
  else if(s == "espanha" || s == "argentina" || s == "chile" || s == "mexico") 
    printf("Feliz Navidad!\n");
  else if(s == "grecia") 
    printf("Kala Christougena!\n");
  else if(s == "estados-unidos" || s == "inglaterra" || s == "australia" || s == "antardida" || s == "canada") 
    printf("Merry Christmas!\n");
  else if(s == "suecia") 
    printf("God Jul!\n");
  else if(s == "turquia") 
    printf("Mutlu Noeller\n");
  else if(s == "irlanda") 
    printf("Nollaig Shona Dhuit!\n");
  else if(s == "belgica") 
    printf("Zalig Kerstfeest!\n");
  else if(s == "italia" || s == "libia") 
    printf("Buon Natale!\n");
  else if(s == "siria" || s == "marrocos") 
    printf("Milad Mubarak!\n");
  else if(s == "japao")
    printf("Merii Kurisumasu!\n");
  else 
    printf("--- NOT FOUND ---\n");
}

int main()
{
  string s;
  
  while(getline(cin,s)){
    tradutor(s);
  }
  
  return 0;
}
