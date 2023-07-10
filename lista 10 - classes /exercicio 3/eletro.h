#ifndef ELETRO_H
#define ELETRO_H
#include <iostream>

using namespace std;

class Eletro {
private:
  string nome;
  int telefone;
  int valor;

public:
  Eletro();
  Eletro(string, int, int);
  ~Eletro(){};

  // funções membro
  void set_nome(string nn);
  void set_telefone(int tt);
  void set_valor(int vv);
  string get_nome();
  int get_telefone();
  int get_valor();
  void inicializa(string nn, int tt, int vv);
  void exibir();
};

#endif