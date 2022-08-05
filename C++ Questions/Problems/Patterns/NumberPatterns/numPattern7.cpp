//Triangle pattern
/*
 1
 2 2
 3 3 3
 4 4 4 4
*/
//no of rows = n, no of cols and value of col are as per the ith row

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		j = 1;
		while (j <= i) {
			cout << i;
			j++;
		}
		i++;
		cout << endl;
	}
	return 0;
}
