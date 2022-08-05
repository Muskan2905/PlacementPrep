//Triangle pattern
/*
 1
 2 3
 3 4 5
 4 5 6 7
*/
//no of rows = n, no of cols are as per the ith row, row value is starting as ith row

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j, k;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		j = 1;
		k = i;
		while (j <= i) {
			cout << k;
			k++;
			j++;
		}
		i++;
		cout << endl;
	}
	return 0;
}
