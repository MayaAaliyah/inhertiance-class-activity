#ifndef cat_h
#define cat_h
#include <string>
#include "animal.h"

class Cat: public Animal { 
public:
  Cat() {
    catBreed = " ";
  }
void displayInfo() {
  Animal::displayInfo();
  std::cout << "Cat breed: " << breed << std::endl;
}

private:
std::string breed;
};

#endif
