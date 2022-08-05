//Triangle pattern
/*
 1
 2 1
 3 2 1
 4 3 2 1
*/
//no of rows = n, no of cols are as per the ith row,value of col starts at ith row and dec till 1

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		j = i;
		while (j >=1 && j<=i) {
			cout << j;// or instead i-j+1 than making changes all over the code
			j--;
		}
		i++;
		cout << endl;
	}
	return 0;
}
