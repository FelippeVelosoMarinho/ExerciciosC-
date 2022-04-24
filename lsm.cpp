#include <iostream>
#include <list>
#include <set>
#include <map>
//Caso faça deleções e inserções em vários locais, use list
double funcao() {
  return 0.0;
}
int main() {
   auto var = funcao(); //função retorna int, então var é int
  std::cout << "exemplo do list" << std::endl;
  std::list<int> l = {7, 5, 16, 8};

  l.push_front(25);//O vector não suporta push_front
  l.push_back(13);

  // iterator de uma lista de inteiros
  std::list<int>::iterator ptr = l.begin();
  while (ptr != l.end()) {
    std::cout << *ptr << std::endl;
    ptr = next(ptr);
  }
//------------------------------------------------//
  std::cout << "exemplo do set" << std::endl;
  std::set<int> s; 
  for(int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }

  s.insert(7);
 
  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }
  for(int i = 2; i <= 10; i += 2) {
    s.erase(i);
  }
 
  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }

//------------------------------------------------//
  std::cout << "exemplo do map" << std::endl;  
  std::map<int,std::string> m;
  m.insert(std::pair<int,std::string>(2017123456, "Joao"));
 
  m[2016123456] = "Maria";
  m[2018123456] = "Carlos";
  m[2015123456] = "Jose";
  m[2014123456] = "Joana";
 
  std::map<int,std::string>::iterator it;
  for (it = m.begin(); it != m.end(); it++) {
    std::cout << it->first << ": " << it->second << std::endl;
  }  
  
  return 0;
}