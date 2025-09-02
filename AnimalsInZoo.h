#include <iostream>
#include <stdlib.h>
using namespace std;
#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

class AnimalsInZoo {
   public:
      AnimalsInZoo(Animal sanimal);
      AnimalsInZoo();
      void display();

   private:
      int numAnimals;
      Animal animal;
};

#endif // ANIMALSINZOO_H
