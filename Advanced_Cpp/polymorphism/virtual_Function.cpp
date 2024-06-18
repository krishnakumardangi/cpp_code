#include<iostream>
using namespace std;

// Your code goes here
class Animal
{
    protected:
        int age;
    public:
        Animal (int a)
        {
            age = a;
        }
        virtual void Eat()
        {
            cout<<"Animal eats food"<<endl;
        }
        virtual int get_Age()
        {
            return age;
        }
};

class Dog: public Animal
{
    public:
        Dog (int age=0) : Animal(age) {}
        void Eat()
        {
            cout<<"Dog eats meat\n";
        }
        int get_Age()
        {
            return age;
        }
};

class Cat: public Animal
{
    public:
        Cat (int age) : Animal(age) {}
        void Eat()
        {
            cout<<"Cat eats meat\n";
        }
        int get_Age()
        {
            return age;
        }
};


int main()  {
   Animal *a;
   Dog dg(8); //making object of child class Dog
   Cat ct(3); //making object of child class Cat
   
   a = &dg;
   a->Eat();
   cout << "Dog's age is: "<<a->get_Age()<<endl;
   a= &ct;
   a->Eat();
   cout << "Cat's age is: "<<a->get_Age()<<endl;
   return 0;
}
