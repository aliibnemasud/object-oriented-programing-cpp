#include <iostream>
using namespace std;
namespace first {
    void hello () { cout << "First Namespace........" << endl; }
    class person {
        public:
        string name;
        int age;
    };
}
namespace second {
    void hello () { cout << "Second Space........" << endl; }
}
// using namespace second
int main()
{    
    second::hello();
    first::person obj;
    obj.name = "Ali";
    cout << obj.name << endl;
}
