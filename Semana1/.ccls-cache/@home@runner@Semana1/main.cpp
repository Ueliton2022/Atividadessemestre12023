#include <iostream>
#include <map>
#include <vector>

class DHT {
  std::map<int, std::string> table;
  int node_id;

public:
  DHT(int node_id) : node_id(node_id) {}

  void insert(int key, std::string value) {
    table[key] = value;
  }

  std::string get(int key) {
    return table[key];
  }
};

int main() {
  DHT dht(0);
  dht.insert(1, "value1");
  dht.insert(2, "value2");
  dht.insert(3, "value3");

  std::cout << dht.get(2) << std::endl;
  return 0;
}
