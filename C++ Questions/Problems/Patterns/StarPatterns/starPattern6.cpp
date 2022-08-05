//Triangular star pattern
/*
* * * *
  * * *
    * *
      * 
*/
//no of rows, no of cols are as per n, then n-1........

#include<iostream>
using namespace std;
int main() {
	int m, i = 1, j,k;
	cout << "Enter no of rows to be in pattern\n";
	cin >> m;
	for (; i <= m; i++) {
		j = 1;
		k = m-i+1;
		while (k < m) {
			cout << " ";
			k++;
		}
		while (j >=1 && j<=m-i+1) {
			cout << "*";
			j++;
		}
		cout << endl;
	}
	return 0;
}
