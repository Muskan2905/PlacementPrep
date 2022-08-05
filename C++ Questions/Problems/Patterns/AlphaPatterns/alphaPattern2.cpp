//E
//DE
//CDE
//BCDE
//ABCDE

//OR

//D
//CD
//BCD
//ABCD

#include<iostream>
using namespace std;
int main(){
    int n;
    char ch1 ,ch2;
    cin >> n;
    ch1 = 64 + n;
    for(int i = 1;i<=n;i++){
        ch2 = ch1;
        for(int j = 1;j<=i;j++,ch2++){
            cout<<ch2;
        }
        ch1--;
        cout<<endl;
    }
    return 0;
}
