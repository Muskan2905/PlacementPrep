//Subtract the Product and Sum of Digits of an Integer
//Leetcode ques 1281
#include<iostream>
using namespace std;
int main(){
  int n,pro=1,sum=0,res,rem;
  while(n!=0){
  rem = n%10;
  //pro
  pro *= rem;
  //sum
  sum += rem;
  n = n/10;
  }
  res = pro-sum;
  cout<<res<<endl;
 return 0; 
}
