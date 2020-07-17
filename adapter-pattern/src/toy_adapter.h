#pragma once 
#include "bird.h"
#include "toy_duck.h"
class ToyAdapter : public Bird {
  public:
    ToyAdapter(ToyDuck* toy_duck) {
      toy_duck_ = toy_duck;
    } 
    void Fly() {
      std::cout <<"Oops! I'm a toy\n";
    }
    void MakeSound() {
      toy_duck_->Squeak();
    }
  private:
    ToyDuck * toy_duck_; // Object Adapter 
};