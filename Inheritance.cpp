#include <iostream>

using namespace std;

class Person {

public:
    string name;
    int age;
};


class Employee : public Person
{
    public:

    int id, salary;
    void printDetails (){

        cout << "Id: " << id << endl;
        cout << "Name of the employee: " << name << endl;
        cout << "Age: " << age << endl;
    }


};

int main()
    {
        Employee Rahim;

        Rahim.name = "Rahim";
        Rahim.age = 42;
        Rahim.id = 26;
        Rahim.printDetails();


    }
