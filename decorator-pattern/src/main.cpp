#include <iostream>
#include "chicken_fiesta.h"
#include "farm_house.h"
#include "margheritta.h"
#include "peppy_paneer.h"
#include "fresh_tomato.h"
#include "barbeque.h"
#include "jalapeno.h"
#include "paneer.h"

int main() {
  Pizza * pizza1 = new FreshTomato(new Barbeque(new PeppyPanner())); 
  std::cout << "Indigrients: " << pizza1->GetDescription() <<"\n"; 
  std::cout << "Total: " << pizza1->GetCost()<<"\n";

  Pizza * pizza2 =  new Barbeque(new Jalapeno(new Paneer(new ChickenFiesta())));
  std::cout << "Indigrients: " << pizza2->GetDescription() <<"\n"; 
  std::cout << "Total: " << pizza2->GetCost()<<"\n";
  return 0;
}