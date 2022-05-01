//Number of 1 bits
//Hamming weight problem
//leetcode ques 191
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    while(n!=0) {    
      if(n & 1){//checking last bit
          count++;
      }
      n = n >> 1; //bitwise right shift of last bit
    }
   cout<<count<<endl;
  return 0;
}
