#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(const string& n, int a) : name(n), age(a) {}

    // Member function to display information
    void displayInfo() {
        cout << "\nName: " << name << ", Age: " << age << endl;
    }

    // Getter for the name attribute
    string getName() const {
        return name;
    }

    // Setter for the age attribute
    void setAge(int a) {
        age = a;
    }
};

int main() {
    // Creating an instance of the Person class
    Person person1("Krishna Kumar", 21);

    // Using the displayInfo method to show information
    person1.displayInfo();

    // Getting the name using the getter method
    cout << "Original Name: " << person1.getName() << endl;

    // Changing the age using the setter method
    person1.setAge(21);

    cout<<"\nAfter age updated.";
    // Displaying updated information
    person1.displayInfo();

    return 0;
}
