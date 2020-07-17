#include <iostream>
#include "sparrow.h"
#include "plastic_toy_duck.h"
#include "toy_adapter.h"
using namespace std;
int main() {
  Bird* sparrow = new Sparrow();
  ToyDuck* plastic_toy_duck = new PlasticToyDuck();
  ToyAdapter* toy_adapter = new ToyAdapter(plastic_toy_duck);

  sparrow->Fly();
  sparrow->MakeSound();

  plastic_toy_duck->Squeak();
  
  // make plastic duck into a real bird
  toy_adapter->Fly();
  toy_adapter->MakeSound();
  return 0;
}