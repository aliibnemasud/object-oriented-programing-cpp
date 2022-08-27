#include <iostream>
using namespace std;
// forward declaration
class ClassB;
class ClassA {
    private:
        int numA;
         // friend function declaration
         friend int add(ClassA, ClassB);
};

class ClassB {
    private:
        int numB;
        // friend function declaration
        friend int add(ClassA, ClassB);
    
};
// access members of both classes
int add(ClassA objectA, ClassB objectB) {
    cin >> objectA.numA >> objectB.numB;
    return (objectA.numA + objectB.numB);
}
int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}