//https://pt.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/fast-modular-exponentiation
//http://www.vivaolinux.com.br/dica/Calculo-da-potencia-modular-de-forma-eficiente

#include <stdio.h>

int main() {
  long long n, mod = 2147483647, r = 1LL, p = 3LL;
  scanf("%lld", &n);
  while(n) {
    if(n&1) r = (r*p)%mod;
    p = (p*p)%mod, n = (n >> 1);
  }
  
  printf("%lld\n", r);
  return 0;
}
