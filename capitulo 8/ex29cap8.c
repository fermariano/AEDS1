#include <math.h>
#include <stdio.h>

float volume(int raio) {
  float vol;
  vol = (pow(raio, 3) * 3.1415 * 4) / 3;
  return vol;
}

int main(void) {

  int raio;
  printf("Digite o raio: ");
  scanf("%d", &raio);

  printf("%.2f\n", volume(raio));

  return 0;
}