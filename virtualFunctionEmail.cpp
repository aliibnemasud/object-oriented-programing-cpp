#include <iostream>

using namespace std;

class webUser {

    public:
        double areaCalculater (double a, double b)
        {
            double area = a*b;
            cout << area << endl;
        }
        virtual void calcTotal () = 0;
};

class Shathil : public webUser {

        public:
            void calcTotal ()
            {
                cout << "Web User CalcTotal Is calling..." << endl;
            }
};



int main()
{
    webUser *w;

    Shathil s;

    w = &s;
    w -> calcTotal();
    w-> areaCalculater(5.5, 5.3);



    cout << "Print Hello!!" << endl;

    return 0;
}
