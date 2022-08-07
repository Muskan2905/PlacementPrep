//Sum Of Digits

#include<iostream>
using std::cout;
using std::cin;
int main() {

	// Write your code here
    int n,rem,res = 0;
    cin >> n;
    while(n>=0){
        if(n == 0){
            break;
        }
        rem = n % 10;
        res += rem;
        n = n/10;
    }
    cout << res;
    return 0;
}
