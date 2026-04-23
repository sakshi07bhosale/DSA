#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0; //binary number
    int pow = 1; //power of 2

    while(decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2; 

        ans += (rem*pow);
        pow *= 10;
    }
    return ans; //binary form
}

int main() {
    int decNum = 50;

    cout << decToBinary(decNum) << endl;
    return 0;

}