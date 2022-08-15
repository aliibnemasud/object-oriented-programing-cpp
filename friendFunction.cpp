#include <iostream>
using namespace std;

class MyClass {

    public:
        int member1;
        friend int printHello();
};

void printHello (MyClass) {

    cout << "Hello From Friend Function..." << endl;
}


int main() {
    MyClass obj;

    MyClass d;

    cout << d.printHello(d) << endl;

    // Error! Cannot access private members from here.
    obj.member1 = 5;

    cout << obj.member1 << endl;
}
