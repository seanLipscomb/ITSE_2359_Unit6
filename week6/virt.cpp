#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:
        virtual void speak(){
            cout << "Animal sound" << endl;
        }

        virtual ~Animal(){
            cout << "Animal destroyed" << endl;
        }
};

class Dog : public Animal {
    void speak() override {
        cout << "woof" << endl;
    }
};

int main()
{
    Animal *animalPtr = new Dog();
    animalPtr -> speak();
    delete animalPtr;
    return 0;
}