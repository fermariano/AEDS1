#ifndef PESSOA_H
#define PESSOA_H
#include <cstring>
#include <iostream>

using namespace std;

class Pessoa {
private:
  int codigo;
  string nome;
  int idade;
  string endereco;
  int numero;
  string complemento;

public:
  Pessoa();
  Pessoa(int, string, int, string, int, string);
  ~Pessoa(){};

  // funções membro
  void inicializar(int cc, string nn, int ii, string ee, int nu, string comp);
  int get_codigo();
  void set_codigo(int cc);
  string get_nome();
  void set_nome(string nn);
  int get_idade();
  void set_idade(int ii);
  string get_endereco();
  void set_endereco(string ee);
  int get_numero();
  void set_numero(int nu);
  string get_complemento();
  void set_complemento(string comp);
  void exibir();
};

#endif