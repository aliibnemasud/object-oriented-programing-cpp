#include <iostream>
using namespace std;

class MobileUser {

    public:
        void call ()
        {
            cout << "Calling From Someone!" << endl;
        }

        virtual void sendMessage() = 0;
};

class Sakib : public MobileUser {

    public:
        void sendMessage ()
        {
            cout << "Hello from Sakib!" << endl;
        }

};

class Mamun : public MobileUser {

    public:
        void sendMessage ()
        {
            cout << "Hello from Mamun!" << endl;
        }

};

int main ()

{
    MobileUser *a;

    Sakib s;
    Mamun m;

    a = &s;
    a -> sendMessage();

    a -> call();

    a= &m;
    a -> sendMessage();


}



