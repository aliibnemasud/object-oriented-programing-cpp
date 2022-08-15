#include <iostream>
using namespace std;


class Person {

   public:
        double property;
        string name;
        int age;
        Person(double x)
        {
            property = x;
        }
};



int main()
{
    cout << "Hello World!" << endl;

    Person selim(5.3);

    cout << selim.property << endl;


    return 0;
}
