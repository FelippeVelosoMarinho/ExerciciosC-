#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Agencia
{
private: 
    string _nome;
    string _numero;  
public:
    Agencia(string nome, string numero) {
    _nome = nome;
    _numero = numero;
  }

  string get_nome() {
    return _nome;
  }
  string get_numero() {
    return _numero;
  }

  void print(){
    cout << "Numero:" << _numero << endl;
    cout << "Nome: " << _nome << endl;
  }
};

class Banco {
  private:
          string nome;
          vector<Agencia> agencias;
  public:
        Banco(string nome){
          nome = nome;
        }

  void adicionaAg(Agencia agencia)  {
    agencias.push_back(agencia);  
  }
  
  void print(){
    cout << "Banco: " << nome << endl;
    for(Agencia ag : agencias){
      cout << " " << "Nome: " <<ag.get_nome() << " Número: " << ag.get_numero() << endl;
    }
  }
};

int main(){
	Agencia agencia1("123", "Agencia 1");
	Agencia agencia2("456", "Agencia 2");
	Agencia agencia3("789", "Agencia 3");

	Banco banco("Banco 1");
	banco.adicionaAg(agencia1);
	banco.adicionaAg(agencia2);
	banco.adicionaAg(agencia3);
	banco.print();

  return 0;
}