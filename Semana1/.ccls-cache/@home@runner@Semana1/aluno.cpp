#include "cliente.h"

Cliente::Cliente(){
  this->IMEI   = -1;
  this->login = "";
};  
Cliente::Cliente(int IMEI, std::string login){
  this->IMEI    = IMEI;
  this->login  = login;
}
string Cliente::getNome() const {
  return login;
}
int Cliente::getRa() const{
  return IMEI;
}