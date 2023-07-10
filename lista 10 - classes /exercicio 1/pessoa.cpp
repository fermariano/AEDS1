#include "pessoa.h"
#include <cstring>
#include <iostream>

using namespace std;

FILE *saida = fopen("saida.txt", "w");

void Pessoa::inicializar(int cc, string nn, int ii, string ee, int nu,
                         string comp) {
  set_codigo(cc);
  set_nome(nn);
  set_idade(ii);
  set_endereco(ee);
  set_numero(nu);
  set_complemento(comp);
}

Pessoa::Pessoa() { inicializar(0, "Ninguém", 0, "Nenhum", 0, "Nenhum"); }

Pessoa::Pessoa(int cc, string nn, int ii, string ee, int nu, string comp) {
  inicializar(cc, nn, ii, ee, nu, comp);
}

void Pessoa::set_codigo(int cc) {
  if (cc < 0) {
    cout << "Código inválido!\n";
    codigo = 0;
  } else {
    codigo = cc;
  }
}

int Pessoa::get_codigo() { return codigo; }

void Pessoa::set_nome(string nn) {
  if (nn.size() < 2) {
    cout << "Nome inválido!\n";
    nome = "Ninguém";
  } else {
    nome = nn;
  }
}

string Pessoa::get_nome() { return nome; }

void Pessoa::set_idade(int ii) {
  if (ii < 0) {
    cout << "Idade inválida!\n";
    idade = 0;
  } else {
    idade = ii;
  }
}

int Pessoa::get_idade() { return idade; }

void Pessoa::set_endereco(string ee) {
  if (ee.size() < 5) {
    cout << "Endereço inválido!\n";
    endereco = "Nenhum";
  } else {
    endereco = ee;
  }
}

string Pessoa::get_endereco() { return endereco; }

void Pessoa::set_numero(int nu) {
  if (nu < 0) {
    cout << "Número inválido!\n";
    numero = 0;
  } else {
    numero = nu;
  }
}

int Pessoa::get_numero() { return numero; }

void Pessoa::set_complemento(string comp) {
  if (comp.size() < 5) {
    cout << "Complemento inválido!\n";
    complemento = "Nenhum";
  } else {
    complemento = comp;
  }
}

string Pessoa::get_complemento() { return complemento; }

void Pessoa::exibir() {
  cout << "Código: " << get_codigo() << "\n";
  cout << "Nome: " << get_nome() << "\n";
  cout << "Idade: " << get_idade() << "\n";
  cout << "Endereço: " << get_endereco() << "\n";
  cout << "Número: " << get_numero() << "\n";
  cout << "Complemento: " << get_complemento() << "\n";
  cout << "\n";
}
