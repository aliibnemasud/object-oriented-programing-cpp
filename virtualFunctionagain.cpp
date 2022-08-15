#include <iostream>
using namespace std;


class PhoneUser
{

    public:
        int printHello ()
        {
            cout << "Print Hello" << endl;
        }
        virtual void sendMessage () = 0;
};

class Rahim : public PhoneUser {

    public:
        void sendMessage ()
        {
            cout << "Hello From Rahim" << endl;
        }

};


int main() {

    PhoneUser *a;

    Rahim r;
    a = &r;

    a -> sendMessage();

return 0;
}
