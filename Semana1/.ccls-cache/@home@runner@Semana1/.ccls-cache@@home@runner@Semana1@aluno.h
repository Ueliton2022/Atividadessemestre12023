#include <iostream>
using namespace std;

class Aluno{
private :
  int         IMEI;
  std::string nome;  
public:  
  Aluno();
  Aluno(int IMEI, std::string nome);
  string getNome() const;
  int getRa() const;
};