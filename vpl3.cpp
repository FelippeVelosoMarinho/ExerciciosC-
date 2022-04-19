#include <iostream>
#include <math.h> 

unsigned factorial(int arg) {
    int n = 1;
    while (arg > 1)
        n *= arg--;
    return n;    
}

unsigned interval(double start, double end) {
  int t1 = start;
  int t2 = end;
  std::cout<<start<<std::endl; 
  std::cout<<end<<std::endl; 
        std::cout<<"blavbla"<<t1<<std::endl; 
        std::cout<<"blavbla"<<t2<<std::endl; 
    double n = 0.0;
    if(t1 == t2)
      return 0;
    while(end >= start)
    {
      end--;
      std::cout<<"aaa"<<std::endl; 
      n++;
    } 
  return n;
}

int main() {
  int arg = 2;
  auto fatorial = factorial(arg);
  std::cout << "Fatorial: " << fatorial << std::endl;
  double start = 2.01; 
  double end = 2.9;
  auto intervalo = interval(start, end);
  std::cout << "Intervalo: " << intervalo << std::endl;
  
  /*char test = 0;
  std::cin >> test;
  switch (test) {
    case 'f': {
      int arg = 0;
      std::cin >> arg;
      std::cout << factorial(arg) << std::endl;
    }
    break;
    case 'i': {
      double arg0 = 0;
      double arg1 = 0;
      std::cin >> arg0 >> arg1;
      std::cout << interval(arg0, arg1) << std::endl;
    }
    break;
  }*/
}