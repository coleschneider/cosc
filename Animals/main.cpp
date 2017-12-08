#include "Cat.h"
#include "Dog.h"

int main(){
    Anima *animals[4];
    animals[0] = new Cat();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Dog();
    
    for (int i=0; i < 4; i++){
        animal[i].speak(); //polymorphism: one of several functions
                            //is called depending on context
    }
    
    
    return 0;


}