#ifndef dog_h
#define dog_h
#include <string>
#include "animal.h"

class Dog: public Animal {
public:
  Dog() {
    dogBreed = " ";
  }

void displayInfo() {
  Animal::displayInfo();
  std::cout<< "Dog breed: " << dogBreed;
}

private:
std::string dogBreed;
};
