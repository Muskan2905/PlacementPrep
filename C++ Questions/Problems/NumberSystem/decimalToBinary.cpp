//Decimal To Binary

#include<iostream>
using std::cout;
using std::cin;

int main() {
	// Write your code here
	long int n,res = 0,power = 1;
    int count  = 0,rem;
    cin >> n;
    while(n >= 0){
        if(n == 0)
            break;
        if(count > 0)
        	power *= 10;
        rem = n % 2;
        res += rem*power;
        n = n/2;
        count ++;
    }
    cout<<res;
    return 0;
}
