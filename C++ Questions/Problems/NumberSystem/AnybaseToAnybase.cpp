//AnyBase To AnyBase

#include<iostream>
using std::cout;
using std::cin;

int numConversion(int,int,int);
int main() {

	// Write your code here
    long int sourceNum,num,res;
    int sourceBase,destinationBase;
    cin >> sourceNum >> sourceBase >> destinationBase;
    if(sourceBase == 10 || destinationBase == 10){
        num = numConversion(sourceNum,sourceBase, destinationBase);
    }
    if((destinationBase != 10) && (sourceBase != 10)){
        res = numConversion(sourceNum,sourceBase,10);
        num = numConversion(res,10,destinationBase);
    }
    cout<<num;
    return 0;
}

int numConversion(int sourceNum, int sourceBase, int destinationBase){
    long int destinationNumber = 0,power = 1;
    int rem;
    while(sourceNum != 0){
        rem = sourceNum % destinationBase;
        destinationNumber += rem * power;
        sourceNum = sourceNum / destinationBase;
        power *= sourceBase;
    	}
    return destinationNumber;
}