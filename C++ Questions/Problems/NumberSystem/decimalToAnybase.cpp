//Decimal To AnyBase

#include<iostream>
using std::cout;
using std::cin;

int main() {

	// Write your code here
    int n,destinationBase, destinationNumber = 0,rem,power = 1;
    cin >> n >> destinationBase;
    while(n != 0){
        rem = n % destinationBase;
        destinationNumber += rem * power;
        n = n / destinationBase;
        power *= 10;
    }
    cout<<destinationNumber;
    return 0;
}