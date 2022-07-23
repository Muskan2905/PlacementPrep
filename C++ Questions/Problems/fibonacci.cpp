#include<iostream>
using std::cout;
using std::cin;
using std::endl;


int main(){
    int n,f1=0,f2=1,f3,i=0,fib[100],num,flag=1;
    cout<<"Enter the range of fibonacci\n";
    cin >> n;
    for(;i<=n;i++){
        if(i==0){
            cout<<f1<<"\t";
            fib[i] = f1;
            continue;
        }
        else if(i==1){
            cout<<f2<<"\t";
            fib[i] = f2;
            continue;
        }
        else{
            f3 = f1 + f2;
            cout<<f3<<"\t";
            fib[i] = f3;
            f1 = f2;
            f2 = f3;
        }
    }
    cout<<endl;
    cout<<"Enter the number whether integer is part of fibonacci sequence or not\n";
    cin >> num;
    for(i=0;i<=n;i++){
        if(num == fib[i]){
            flag = 1;
            cout<<num<<" is part of fibonacci sequence under the range of "<<n<<endl;
            break;
        }
        flag = 0;
    }
    if(flag==0){
        cout<<num<<" is not a part of fibonacci sequence under the range of "<<n<<endl;
    }
    return 0;
}

