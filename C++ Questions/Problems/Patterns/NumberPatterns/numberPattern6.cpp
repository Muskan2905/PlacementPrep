//Patterns
/*
 1  2  3  4 
 5  6  7  8
 9 10 11 12
 13 14 15 16
*/
//no of rows = n, col as rows, but there is count starts from 1

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j=1, count = 1;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		while (j <= m) {
			cout << count;
			j++;
			count++;
		}
		i++;
		j = 1;
		cout << endl;
	}
	return 0;
}
