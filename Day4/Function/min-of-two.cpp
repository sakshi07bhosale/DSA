#include<iostream>
using namespace std;

//  min of 2 numbers
int minOfTwo(int a,int b){
    if( a < b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout<<"Min = " <<minOfTwo(5,3) <<endl;
    return 0;
}