//AnyBase To Decimal

#include<iostream>
using std::cout;
using std::cin;

int main() {

	// Write your code here
    int sourceNumber,sourceBase, res = 0,rem,power = 1;
    cin >> sourceNumber >> sourceBase;
    while(sourceNumber != 0){
        rem = sourceNumber % 10;
        res += rem * power;
        sourceNumber = sourceNumber / 10;
        power *= sourceBase;
    }
    cout<<res;
    return 0;
}