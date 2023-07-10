#include "eletro.h"
#include <iostream>
using namespace std;

int main() {

  Eletro produto[15];
  int valor, telefone, soma;
  string nome;
  float media;

  for (int i = 0; i < 15; i++) {

    cout << "Nome: ";
    cin >> nome;

    cout << "Telefone: ";
    cin >> telefone;

    cout << "Valor: ";
    cin >> valor;

    produto[i].inicializa(nome, telefone, valor);
  }

  for (int j = 0; j < 15; j++) {
    soma += produto[j].get_valor();
  }

  media = soma / 15.0;

  cout << "Média do valor: " << media << "\n";

  for (int k = 0; k < 15; k++) {
    if (produto[k].get_valor() < media) {
      cout << "Nome: " << produto[k].get_nome() << "\n";
      cout << "Telefone " << produto[k].get_telefone() << "\n\n";
    }
  }
}