#include "eletro.h"
#include <iostream>
using namespace std;

void Eletro::inicializa(string nn, int tt, int vv) {
  set_nome(nn);
  set_telefone(tt);
  set_valor(vv);
}

Eletro::Eletro() {
  inicializa("Nenhum", 0, 0);
}

Eletro::Eletro(string nn, int tt, int vv) {
  inicializa(nn, tt, vv);
}

void Eletro::set_nome(string nn) {
  if (nn.size() <= 2) {
    cout << "Nome inválido!\n";
    nome = "Nenhum";
  } else {
    nome = nn;
  }
}

void Eletro::set_telefone(int tt) {
  if (tt < 10000000) {
    cout << "Telefone inválido\n";
    telefone = 10000000;
  } else {
    telefone = tt;
  }
}

void Eletro::set_valor(int vv) {
  if (vv < 0) {
    cout << "Valor inválido\n";
    valor = 0;
  } else {
    valor = vv;
  }
}

string Eletro::get_nome() {
  return nome;
}

int Eletro::get_telefone() {
  return telefone;
}

int Eletro::get_valor() {
  return valor;
}

void Eletro::exibir() {
  cout << "Nome: " << get_nome() << "\n";
  cout << "Telefone: " << get_telefone() << "\n";
  cout << "Valor: " << get_valor() << "\n";
}