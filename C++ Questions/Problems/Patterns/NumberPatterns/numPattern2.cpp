//Diamond of Numbers
/*
n = 5
    1
   123
  12345
   123
    1
*/

/*
n = 7
     1
    123
   12345
  1234567
   12345
    123
     1
*/

#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
    int mean,n,num;
    cin >> n;
    if(n%2 == 0){
        n++;
    }
    mean = (n+1)/2;
    num = n;
    for(int i =1;i<=n;i++){
        //first half
        if(i<=mean){
            for(int space = 1;space<=(mean-i);space++){
                cout<<" ";
            }
            for(int j = 1;j<=(2*i)-1;j++){
                cout<<j;
            }
            
        }
        //second half
        else{
            for(int space = 1;space<=(i-mean) ;space++){
                cout<<" ";
            }
            for(int j = 1;j<=num-2;j++){
                cout<<j;
            }
            num -= 2;
        }
        cout<<endl;
    }
    return 0;
}
