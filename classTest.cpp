#include <iostream>
using namespace std;

class Shape {

public:
    void setWidth(int w){
        witdth = w;
    }
    void setHeight (int h){
        height = h;
    }

    protected:
        int witdth;
        int height;
};

class Rectangle: public Shape {

public:
    int getArea(){
        return (witdth * height);
    }
};

int main(void) {
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);
    cout << "Total area: " << Rect.getArea() << endl;
    return 0;
}
