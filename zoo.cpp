#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;


int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);
   Animal animal3("Red Panda", 1825);
   
   AnimalsInZoo tanimal(animal3);
   animal3.display();
   animal2.display();
   animal1->display();
   tanimal.display();

   delete animal1;
}
