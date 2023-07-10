#include <stdio.h>

int main(void) {

  int a, b, c, d, cont=1;

  while (cont <= 5) {
    printf("Digite 4 números: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d) { // a maior
      if (b > c && b > d) { 
        if (c > d) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", a, b, c, d);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", a, b, d, c);
        }
      } else if (c > b && c > d) {
        if (b > d) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", a, c, b, d);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", a, c, d, b);
        }
      }  else if (d > b && d > c) {
        if (b > c) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", a, d, b, c);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", a, d, c, b);
        }
      } else {
        // vazio
      }
    } else if (b > a && b > c && b > d) {
       if (a > c && a > d) { 
        if (c > d) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", b, a, c, d);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", b, a, d, c);
        }
      } else if (c > a && c > d) {
        if (a > d) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", b, c, a, d);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", b, c, a, b);
        }
      }  else if (d > a && d > c) {
        if (a > c) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", b, d, a, c);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", b, d, c, a);
        }
      } else {
        // vazio
      }
    } else if (c > a && c > b && c > d) {
      if (a > b && a > d) {
        if (b > d) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", c, a, b, d);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", c, a, d, b);
        }
      } else if (b > a && b > d) {
        if (a > d) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", c, b, a, d);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", c, b, d, a);
        }
      } else if (d > a && d > b) {
        if (a > b) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", c, d, a, b);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", c, d, b, a);
        }
      }
    } else if (d > a && d > b && d > c) {
      if (a > b && a > c) {
        if (b > c) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", d, a, b, c);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", d, a, c, b);
        }
      } else if (c > a && c > b) {
        if (a > b) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", d, c, a, b);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", d, c, b, a);
        }
      } else if (b > c && b > a) {
        if (a > c) {
          printf("Ordem decrescente: %d - %d - %d - %d\n", d, b, a, c);
        } else {
          printf("Ordem decrescente: %d - %d - %d - %d\n", d, b, c, a);
        }
      }
    }
    cont++;
  }
       
  return 0;
}