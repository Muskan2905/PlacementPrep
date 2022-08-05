//Triangular star pattern
/*
      *
    * *
  * * *
* * * *
*/
//no of rows, no of cols are as per ith row

#include<iostream>
using namespace std;
int main() {
	int m, i = 1, j,k;
	cout << "Enter no of rows to be in pattern\n";
	cin >> m;
	for (; i <= m; i++) {
		k = 1;
		j = 1;
		while (k <= m-i) {
			cout << " ";
			k++;
		}
		while (j <= i) {
			cout << "*";
			j++;
		}
		cout << endl;
	}
	return 0;
}
