#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class Conta
{
private:
  int saldop;
  string nomep;

public:
	Conta(string nome, int saldo)
	{
		nomep = nome;
		saldop = saldo;
	};

  int deposito(int dep){
    int depo = saldop + dep;
    return depo;
  }

  int saque(int saq){
    int saqu = saldop - saq;
    return saqu;
  }

  string getNome(){
    return nomep;
  }
  int getSaldo(){
    return saldop;
  }

};

int main(){
  int valor, dep, saq;
  	Conta conta1("Felippe", 100);
    //botar pra descobrir qual o dono da conta<< conta1.getNome
 	  cout << "Saldo atual da conta de "   <<    conta1.getSaldo() << endl; 
  cout << "Digite a operação desejada 1 - Deposito / 2 - Saque" ;  
  cin >> valor;
  switch (valor) {
    case 1:
      cout << "Operação Selecionada - Deposito" << endl;
      cout << "Digite o valor do deposito: " ;
      cin >> dep;
      conta1.deposito(dep);  
      cout << "Saldo atual da conta de "   <<    conta1.deposito(dep) << endl;  
      break;
    case 2:
      cout << "Operação Selecionada - Saque" << endl;
      cout << "Digite o valor do saque: " ;
      cin >> saq;      
      conta1.saque(saq);      
      cout << "Saldo atual da conta de "   <<    conta1.saque(saq) << endl; 

      break;   
    default:
       cout << "Operação desconhecida" << endl;  
  }
}