#include "pessoa.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  Pessoa contato[5];
  string nome, endereco, complemento;
  int codigo, idade, numero;

  for (int i = 0; i < 5; i++) {

    cout << "Digite o código: ";
    cin >> codigo;

    cout << "Digite o nome: ";
    cin >> nome;

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite o endereço: ";
    cin >> endereco;

    cout << "Digite o número: ";
    cin >> numero;

    cout << "Digite o complemento: ";
    cin >> complemento;

    contato[i].inicializar(codigo, nome, idade, endereco, numero, complemento);
  }

  for (int j = 0; j < 5; j++) {
    contato[j].exibir();
  }
}