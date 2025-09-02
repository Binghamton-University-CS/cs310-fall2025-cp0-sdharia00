#include <iostream>
#include "Animal.h"
#include "AnimalsInZoo.h"
#include <stdlib.h>
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal sanimal){
  numAnimals = 1;
  animal = sanimal;
}

AnimalsInZoo::AnimalsInZoo(){
  numAnimals = 0;
};

void AnimalsInZoo::display() {
  cout << "\nThe number of animals in the zoo is " << numAnimals << endl;

  if(numAnimals > 0){
    animal.display();
  }
}

