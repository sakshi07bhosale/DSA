#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    cout<<"Is a equal to b? "<<(a==b)<<endl; // false
    cout<<"Is a not equal to b? "<<(a!=b)<<endl; // true
    cout<<"Is a greater than b? "<<(a>b)<<endl; // false
    cout<<"Is a less than b? "<<(a<b)<<endl; // true
    cout<<"Is a greater than or equal to b? "<<(a>=b)<<endl; // false
    cout<<"Is a less than or equal to b? "<<(a<=b)<<endl; // true
    return 0;
}