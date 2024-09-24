#ifndef animal_h
#define animal_h
#include <string>

class Animal {

public: 
  Animal() {
    age = 0;
    name = " ";
    type = " ";
  }

virtual void displayInfo() {
  std::cout<< "Name: "<< name << "Age: "<< age << "Type: " << type << std::endl;
  return;
}

std::string getType() {
  return type;
}

private:
std::string name;
int age;
std::string type;

};

#endif
