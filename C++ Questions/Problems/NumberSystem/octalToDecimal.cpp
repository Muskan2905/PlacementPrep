//Octal To Decimal

#include<iostream>
using std::cout;
using std::cin;

int main() {
	// Write your code here
	int n,res = 0,power = 1,rem;;
    cin >> n;
    while(n != 0){
        rem = n % 10;
        res += rem * power;
        n = n/10;
        power *= 8;
    }
    cout<<res;
}
