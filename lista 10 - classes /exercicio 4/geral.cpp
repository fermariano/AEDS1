#include "geral.h"
#include <iostream>

using namespace std;

Tipo::Tipo() {
  codigo = 1;
  perc = 0;
}

Tipo::Tipo(int cc) { codigo = cc; }

void Tipo::set_cod(int cc) {

  if (cc == 1 || cc == 2) {
    codigo = cc;
    if (cc == 1) {
      perc = 10;
    } else {
      perc = 20;
    }
  } else {
    codigo = 0;
    cout << "Código inválido!";
  }
}

int Tipo::get_cod() { return codigo; }

void Tipo::imprime() { 
  cout << "Código: " << get_cod() << "\n"; 
}

float Tipo::get_imposto() { return (perc / 100.0); }

Produto::Produto() {
  Tipo temp;
  desc = "Nenhum";
  valor = 0;
}

Produto::Produto(string dd, Tipo tt, int vv) {
  x = tt;
  desc = dd;
  valor = vv;
}

void Produto::set_desc(string dd) {
  desc = dd;
}

void Produto::set_type(Tipo tt) {
  x = tt;
  imposto = (valor * x.get_imposto()) / 100.0;
}

void Produto::set_valor(int vv) {
  if (vv >= 0) {
    valor = vv;
  } else {
    cout << "Valor inválido!\n";
  }
}

int Produto::get_valor() {
  return valor;
}

// continuar declarando as funções

