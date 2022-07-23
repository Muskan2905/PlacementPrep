#include<iostream>
using namespace std;

int main(){
    int a,b,c; //sides of triangle
    cout<<"Enter the sides of triangle\n";
    cin >> a>> b>> c;
    if((a==b) && (a==c) && (b == c)){
        cout<<"1 (equilateral)"<<endl;
    }
    else if((a==b) || (a==c) || (b == c)){
        cout<<"0 (isoceles)"<<endl;
    }
    else{
        cout<<"-1 (scalene)"<<endl;
    }
    return 0;
}
