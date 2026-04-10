#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = a++; // Postfix increment: b gets the value of a (10), then a is incremented to 11
    cout << "Value of b: " << b << endl; // Output: 10
    cout << "Value of a: " << a << endl; // Output: 11
    int c = ++a; // Prefix increment: a is incremented to 12, then c gets the value of a (12)
    cout << "Value of c: " << c << endl; // Output: 12
    cout << "Value of a: " << a << endl; // Output: 12

    int d = a--; // Postfix decrement: d gets the value of a (12), then a is decremented to 11
    cout << "Value of d: " << d << endl; // Output: 12
    cout << "Value of a: " << a << endl; // Output: 11
    int e = --a; // Prefix decrement: a is decremented to 10, then e gets the value of a (10)
    cout << "Value of e: " << e << endl; // Output: 10
    cout << "Value of a: " << a << endl; // Output: 10
    return 0;
}