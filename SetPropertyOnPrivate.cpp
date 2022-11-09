#include <iostream>
using namespace std;
class Person {
    private:
        double property;
    public:
        string name;
        int age;
        void setProp(double x){
            property = x;
        }
        double getProp()
        {
            return property;
        }
};
int main()
{
    cout << "Setting private property as dataAbstrucation" << endl;
    Person selim;
    selim.setProp(5.3);
    cout << selim.getProp();
    return 0;
}
