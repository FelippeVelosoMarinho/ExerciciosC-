#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

class Text
{
private:
   string _arq;
   vector<string> _palavras;
public:
    Text(string arq) {
    _arq = arq; 
    ler();  
  }

  void ler(){
    string palavra;
    ifstream arq(_arq);
    while(arq >> palavra){
      _palavras.push_back(palavra);
    }
  }

  void print(){
    for(auto palavra : _palavras)
    {
      cout << palavra << endl; 
    }
  }

  void ordena(){
    sort( _palavras.begin(), _palavras.end() );
    //Classifica os elementos no intervalo [first,last)em ordem crescente.

  _palavras.erase(unique(_palavras.begin(), _palavras.end() ), _palavras.end() );
    //Remove do vetor um único elemento ( position ) ou um intervalo de elementos ( [first, last) ). myvector.erase (myvector.begin(),myvector.begin()+3);
  }

};
  
int main(){
  Text t1("palavras.txt");
  cout << "As palavras do arquivo são: " << endl;
  t1.print();
  cout << "\nAgora sem palavras repetidas: " << endl;
  t1.ordena();
  t1.print();
}