#ifndef TIPO_H
#define TIPO_H
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Tipo {
private:
  int codigo;
  int perc;

public:
  Tipo();
  Tipo(int);
  ~Tipo() {}

  // funções membro;
  void set_cod(int cc);
  int get_cod();
  float get_imposto();
  void imprime();
};

class Produto {
private:
  string desc;
  Tipo x;
  int valor;
  float imposto;

public:
  Produto();
  Produto(string desc, Tipo x, int valor);
  ~Produto() {}

  // funções membro

  void set_desc(string desc);
  string get_desc();
  void set_type(Tipo x);
  void set_valor(int valor);
  int get_valor();
  float valor_final(int valor, float imposto);
  float get_imposto();
  void set_imposto(float imposto);
};

#endif