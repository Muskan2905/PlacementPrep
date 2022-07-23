//gcd program
#include<iostream>
using namespace std;

int main(){
    int a,b,i,gcd=1,res;
    cout<<"Enter a and b\n";
    cin >>a >> b;
    res = min(a,b);
    for(i=res;i<=res;i--){
        if(a%i==0 && b%i==0){
                gcd *= i;
                break;
            }
        }
    cout<<"gcd of "<<a<<" and "<<b<<" = "<<gcd<<endl;
    return 0;
}
