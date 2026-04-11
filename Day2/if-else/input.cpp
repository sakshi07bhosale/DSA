#include <iostream>
using namespace  std;
int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if(n > 18){
        cout << "You can vote" << endl;
    }
    else{
        cout << "You cannot vote" << endl;
    }
    return 0;

}

