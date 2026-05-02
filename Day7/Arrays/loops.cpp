#include<iostream>
using namespace std;

int main(){
    int marks[5]={99,100,54,36,88};
    
    int sz=sizeof(marks);
    cout<<sz<<endl; // it prints 20 that`s why int size is 4 

    int size = 5;
    for (int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}