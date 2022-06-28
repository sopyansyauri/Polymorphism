#include <iostream>

using namespace std;

// base class
class Animal{
    public:
        void animalSounds() {
            cout << "the Animal make a sound \n";
        }
};

// derived class
class Pig: public Animal {
    public:
        void animalSound() {
            cout << "the Pig says: wee wee \n";
        }
};

class Dog: public Animal {
    public:
        void animalSoundss() {
            cout << "the Dog says: guk guk \n";
        }
};

int main(int argc, char const *argv[])
{
    /* code */
    Animal binatang;
    Pig babi;
    Dog anjing;
    
    binatang.animalSounds();
    babi.animalSound();
    anjing.animalSoundss();
    
    return 0;
}
