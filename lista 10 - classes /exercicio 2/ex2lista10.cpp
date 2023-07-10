#include "pessoa.h"
#include <iostream>
#include <stdlib.h>

int main() {

  int pessoas = 3, dia, mes, cont = 0;
  string nome;
  Pessoa lista[pessoas];

  for (int i = 0; i < pessoas; i++) {
    cout << "Nome: ";
    cin >> nome;

    cout << "Dia: ";
    cin >> dia;

    cout << "Mês: ";
    cin >> mes;

    lista[i].inicializar(nome, dia, mes);
  }

  for (int j = 1; j <= 12; j++) {
    cout << "Mês " << j << ":\n";
    for (int k = 0; k < pessoas; k++) {
      if (lista[k].get_mes() == j) {
        lista[k].exibir();
        cout << "\n";
      } 
    }
  }
}