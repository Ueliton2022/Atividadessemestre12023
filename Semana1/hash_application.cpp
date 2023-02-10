#include <iostream>
#include "hash.h" 

using namespace std;

int main(){
  Hash clientesHash(10);
   int   ras[7]   = {
     12704, 31300, 1234,
     49001, 52202, 65606,
     91234};
  string login[7] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"}; 
	    
  for (int i = 0; i < 7; i++) {
    Cliente cliente = Cliente(ras[i], login[i]);
    clientesHash.insertItem(cliente);
  }
  clientesHash.print();  
  cout << "------------------------------" <<  endl;
  
  Cliente cliente(12704,"");  
  bool     found = false;
  clientesHash.retrieveItem(cliente, found);
  cout << cliente.getLogin() << " -> " << found << endl;
  
  cout << "------------------------------" <<  endl;

  clientesHash.deleteItem(cliente);
  clientesHash.print();
  cout << "Fim" << endl;  
}