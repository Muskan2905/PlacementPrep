//galaxy of stars only with odd n
//if n is even it is increased by 1
//n = 5
/*
    *
    **
    ***
    **
    *
*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n,mean;
    cin >> n;
    if(n % 2 == 0){
        n++;
    }
    mean = (n + 1)/2;
    for(int i = 1;i<=n;i++){
        if(i <= mean){
            for(int j = 1;j<=i;j++){
            cout<<"*";
        	}
        }
        else{
         	for(int j = 1;j<=(n-i+1);j++){
            cout<<"*";
        	}
        }
        cout<<endl;
    }


    return 0;
}
