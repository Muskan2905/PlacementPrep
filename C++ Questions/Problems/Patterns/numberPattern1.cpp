/*  1 
    3 2 
    4 5 6 
    10 9 8 7 
    11 12 13 14 15 
    21 20 19 18 17 16 
*/


#include<iostream>
using namespace std;

int main(){
    int i,j,k,max=3,min=1,n;
    cin >> n;
    for(i =1;i<=n;i++){
        if(i%2 == 0){
            //even row
            //reverse order
            //max j
            //j--
            for(j=max,k=1;j>=1 && k<=i ;j--,k++){
                cout<<j<<" ";
            }
            min =  max + 1;
        }
        else{
            //odd row
            //sequencing order
            //min j
            //j++;
            for(j=min,k=1;k<=i;j++,k++){
                cout<<j<<" ";
            }
            max = j+i;
        }
        
        cout<<endl;
    }
    return 0;
}
