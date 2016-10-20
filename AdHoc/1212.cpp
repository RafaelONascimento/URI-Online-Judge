#include <stdio.h>
#include <stdio.h>

int verifyCarry(int x,int y)
{
  int resto = 0,carry= 0,number1,number2,sum = 0;
  
  while((x+y) != 0){
    number1=x%10;
    number2=y%10;

    if((number1+number2+resto)>=10){
      carry++;
      resto=1;
    }
    else {
      resto=0;
    }
    x= x/10;
    y=y/10;
  }
  return carry;
}

int main()
{
  int x , y,carry=0;

  while(scanf("%d %d",&x,&y),(x+y) != 0){    
    carry=verifyCarry(x,y);

    if(carry==0)printf ("No carry operation.\n");
    else if(carry==1) printf ("1 carry operation.\n");
    else printf("%d carry operations.\n",carry);
  }
  return 0;
}
