#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  string s;
  int t;
  
  while(getline(cin, s)){
    t = s.length();
    
    for (int i = 0; i < t; i++){
      if(s[i] == '1') printf("`");
      if(s[i] == '2') printf("1");
      if(s[i] == '3') printf("2");
      if(s[i] == '4') printf("3");
      if(s[i] == '5') printf("4");
      if(s[i] == '6') printf("5");
      if(s[i] == '7') printf("6");
      if(s[i] == '8') printf("7");
      if(s[i] == '9') printf("8");
      if(s[i] == '0') printf("9");
      if(s[i] == '-') printf("0");
      if(s[i] == '=') printf("-");
      if(s[i] == 'Q') printf("=");
      if(s[i] == 'W') printf("Q");
      if(s[i] == 'E') printf("W");
      if(s[i] == 'R') printf("E");
      if(s[i] == 'T') printf("R");
      if(s[i] == 'Y') printf("T");
      if(s[i] == 'U') printf("Y");
      if(s[i] == 'I') printf("U");
      if(s[i] == 'O') printf("I");
      if(s[i] == 'P') printf("O");
      if(s[i] == '[') printf("P");
      if(s[i] == ']') printf("[");
      if(s[i] == '\\') printf("]");
      if(s[i] == 'A') printf("\\");
      if(s[i] == 'S') printf("A");
      if(s[i] == 'D') printf("S");
      if(s[i] == 'F') printf("D");
      if(s[i] == 'G') printf("F");
      if(s[i] == 'H') printf("G");
      if(s[i] == 'J') printf("H");
      if(s[i] == 'K') printf("J");
      if(s[i] == 'L') printf("K");
      if(s[i] == ';') printf("L");
      if(s[i] == '\'') printf(";");
      if(s[i] == 'Z') printf("\'");
      if(s[i] == 'X') printf("Z");
      if(s[i] == 'C') printf("X");
      if(s[i] == 'V') printf("C");
      if(s[i] == 'B') printf("V");
      if(s[i] == 'N') printf("B");
      if(s[i] == 'M') printf("N");
      if(s[i] == ',')  printf("M");
      if(s[i] == '.') printf(",");
      if(s[i] == '/') printf(".");
      if(s[i] == ' ') printf(" ");
    }
    printf("\n");
  }
  return 0;
}
