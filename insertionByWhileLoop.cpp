#include <iostream>
using namespace std;

int main ()
{
    int a[25],n,i,psition,newdata;

    cout << "How many data do you want to insert: ";
    cin >> n;
    i=1;
    while(i<=n){
        cout << "Number["<< i << "]: ";
        cin >> a[i];
        i++;
    }
    cout << "Which data do you want to insert: ";
    cin >> newdata;
    cout << "Which position do you want to insert: ";

    cin >> psition;
    i=n;
    while (i>=psition){
        a[i+1]=a[i];
        i--;
    }

    a[psition] = newdata;

    n=n+1;

    cout << "After insertion, Array elements are: " << endl;
    i=1;
    while (i<=n){
        cout << "Number["<< i << "]: " << a[i] << endl;
        i++;
    }

    return 0;
}
