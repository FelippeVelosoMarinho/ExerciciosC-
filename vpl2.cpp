#include <iostream>
#include <string>

using namespace std;

int main(){
    string palavra;
  int n = palavra.size()+1;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    for(int i = 0; i < palavra.size(); ++i){
        cout <<  palavra[i] << " " << n << endl;
      n++;
    }
    //cout << "Hello World" << endl;
    return 0;
}