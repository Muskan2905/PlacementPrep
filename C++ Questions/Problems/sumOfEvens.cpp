#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter range to calculate sum of evens\n";
    cin >> n;
    for(int i=2;i<=n;i++){
        if(i%2 == 0){
            sum += i;
        }
    }
    cout<<"sum of evens till "<<n<<" = "<<sum<<endl;

    return 0;
}
