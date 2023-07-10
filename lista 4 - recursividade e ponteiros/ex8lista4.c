#include <stdio.h>

int main(void) {

  int x, *p, **q;
  p = &x;
  q = &p;
  x = 10;
  printf ("\n%d\n", **q);

  
  return 0;
}