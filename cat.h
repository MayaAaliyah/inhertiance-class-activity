#ifndef cat_h
#define cate_h
#include <string>
#include "animal.h"

class Cat: public Animal { 
public:
  Cat() {
    catBreed = " ";
  }
void displayInfo() {
  Animal::displayInfo();
  std::cout << "Breed: " << catBreed << std::endl;
}

private:
std::string catBreed;
};
