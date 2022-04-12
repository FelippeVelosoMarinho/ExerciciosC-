#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Carro
{
private: 
    string _nome;
    string _cor;
    string _placa;
    double _preco;    
public:
    Carro(string nome, string cor, string placa, double preco) {
    _nome = nome;
    _cor = cor;
    _placa = placa;
    _preco = preco;  
  }

  string get_nome() {
    return _nome;
  }
  string get_cor() {
    return _cor;
  }
  string get_placa() {
    return _placa;
  }
  double get_preco() {
    return _preco;
  }
};

int main(){
  vector<Carro> carros;
  carros.push_back(Carro("Kombi", "Branca", "323232", 15000.00));

  cout << carros.at(0).get_nome() << endl;
}