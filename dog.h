#ifndef dog_h
#define dog_h
#include <string>
#include "animal.h"

class Dog: public Animal {
public:
  Dog() {
    dogBreed = " ";
  }



private:
std::string dogBreed;
};
