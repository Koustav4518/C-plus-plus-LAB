#include <iostream>
using namespace std;

void callByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside Call by Value: x = " << x << ", y = " << y << endl;
}

void callByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside Call by Reference: x = " << x << ", y = " << y << endl;
}
int main() {
    int a = 40;
    int b = 50;
    cout << "Before Call by Value: a = " << a << ", b = " << b << endl;
    callByValue(a, b);
    cout << "After Call by Value: a = " << a << ", b = " << b << endl;
    cout << endl;
    cout << "Before Call by Reference: a = " << a << ", b = " << b << endl;
    callByReference(a, b);
    cout << "After Call by Reference: a = " << a << ", b = " << b << endl;
    return 0;
}
