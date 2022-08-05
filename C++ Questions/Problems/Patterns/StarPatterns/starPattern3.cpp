//Triangle pattern
/*
 *
 * *
 * * *
 * * * *
 * * * * *
*/
//no of rows = n, no of cols are as per the ith row

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		j = 1;
		while (j <= i) {
			cout << "*";
			j++;
		}
		i++;
		cout << endl;
	}
	return 0;
}
