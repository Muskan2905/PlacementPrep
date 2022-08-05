//Triangular pattern
/*
	    1
    2 2
  3 3 3
4 4 4 4
*/
//no of rows, no of cols are as ith row

#include<iostream>
using namespace std;
int main() {
	int m, i = 1, j,k;
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
			cout << i;
			j++;
		}
		cout << endl;
	}
	return 0;
}
