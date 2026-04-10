#include <iostream>
using namespace std;
int main(){
    int a=10;
    float b=3.14;
    char c='A';
    bool d=true;

    cout<<"Integer: "<<a<<endl;  // #4byte
    cout<<"Float: "<<b<<endl;    // #4byte
    cout<<"Character: "<<c<<endl; // #1byte
    cout<<"Boolean: "<<d<<endl;   // #1byte


    cout<<"Size of Integer: "<<sizeof(a)<<" bytes"<<endl;
    cout<<"Size of Float: "<<sizeof(b)<<" bytes"<<endl;
    cout<<"Size of Character: "<<sizeof(c)<<" bytes"<<endl;
    cout<<"Size of Boolean: "<<sizeof(d)<<" bytes"<<endl;
    return 0;
}
