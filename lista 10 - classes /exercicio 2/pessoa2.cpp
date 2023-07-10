#include "pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa() { inicializar("Nenhum", 1, 1); }

Pessoa::Pessoa(string nn, int dd, int mm) { inicializar(nn, dd, mm); }

void Pessoa::inicializar(string nn, int dd, int mm) {
  set_nome(nn);
  set_dia(dd);
  set_mes(mm);
}

void Pessoa::set_nome(string nn) {
  if (nn.size() < 2) {
    cout << "Nome inválido!\n";
  } else {
    nome = nn;
  }
}

void Pessoa::set_dia(int dd) {
  if (dd > 0 && dd <= 31) {
    dia = dd;
  } else {
    cout << "Dia inválido!\n";
    dia = 1;
  }
}

void Pessoa::set_mes(int mm) {
  if (mm > 0 && mm <= 12) {
    mes = mm;
  } else {
    cout << "Mês inválido!\n";
    mes = 1;
  }
}

string Pessoa::get_nome() { return nome; }

int Pessoa::get_dia() { return dia; }

int Pessoa::get_mes() { return mes; }

void Pessoa::exibir() {
  cout << "Nome: " << get_nome() << "\n";
  cout << "Data: " << get_dia() << "/" << get_mes();
}