#include <iostream>
using namespace std;

int binToDecimal(int binNum) {
    int ans = 0; //binary number
    int pow = 1; //power of 2

    while(binNum > 0) {
        int rem = binNum % 10;
        ans += (rem*pow);

        binNum /= 10; 

        pow *= 2;
    }
    return ans; //decimal form
}

int main() {
    cout << binToDecimal(101) << endl; //5
    cout << binToDecimal(1101) << endl; //13
    cout << binToDecimal(1111) << endl; //15
    return 0;

}