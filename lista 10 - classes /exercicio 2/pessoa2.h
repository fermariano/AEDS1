#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string.h>

using namespace std;

class Pessoa {
private:
  string nome;
  int dia;
  int mes;

public:
  Pessoa();
  Pessoa(string, int, int);
  ~Pessoa(){};

  // funções membro
  string get_nome();
  void set_nome(string nn);
  int get_dia();
  void set_dia(int dd);
  int get_mes();
  void set_mes(int mm);
  void inicializar(string nn, int dd, int mm);
  void exibir();
};

#endif