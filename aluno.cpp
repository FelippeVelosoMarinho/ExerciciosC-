#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno {
  private:
    string *_nome;
    int _matricula;
    vector<int> _materias;
  public:
    Aluno() {
      // Preencha!!
    }

    void realizar_matricula(int cod_disciplina) {
      //matricula o aluno em alguma disciplina
    }

    void print() {
      //imprime os dados do aluno
    }
};

int main() {
  // Tente fazer o método print imprimir algo como:
  // - Nome do aluno
  // - Matricula
  // - Materias atuais
  //
  // Ideia de main (descomente e faça funcionar!):
  //
  // Aluno a = Aluno(mat, nome);
  // a.realizar_matricula(204);
  // a.realizar_matricula(212);
  // a.print();
  }