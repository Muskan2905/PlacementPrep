//Triangular pattern
/*
	     1
	   2 3
   4 5 6
7 8 9 10
*/
//no of rows, no of cols are as ith row

#include<iostream>
using namespace std;
int main() {
	int m, i = 1, j=1,k,count=1;
	cout << "Enter no of rows to be in pattern\n";
	cin >> m;
	for (; i <= m; i++) {
		j = 1;
		k = 1;
		while (k < m-i+1) {
			cout << " ";
			k++;
		}
		while (j<=i) {
			cout << count;
			count++;
			j++;
		}
		cout << endl;
	}
	return 0;
}
