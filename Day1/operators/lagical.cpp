#include<iostream>
using namespace std;
int main(){
    cout<< !true <<endl; // false
    cout<< !false <<endl; // true
    cout<< (true && true) <<endl; // true
    cout<< (true && false) <<endl; // false
    cout<< (false && false) <<endl; // false
    cout<< (false && true) <<endl; //false
    cout<< (true || false) <<endl; // true
    cout<< (true || true) <<endl; // true
    cout<< (false || false) <<endl; // false
    cout<< (false || true) <<endl; // true
    return 0;
}