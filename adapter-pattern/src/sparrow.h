#pragma once 
#include "bird.h"
#include <iostream>
class Sparrow : public Bird {
  public:
    void Fly() {
      std::cout << "Sparrow can fly\n";
    }
    void MakeSound() {
      std::cout << "Chip Chip\n";
    }
};