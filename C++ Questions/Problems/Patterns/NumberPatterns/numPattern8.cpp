//Triangle pattern
/*
 1
 2 3
 4 5 6
 7 8 9 10
*/
//no of rows = n, no of cols are as per the ith row and value of col is as per the count 

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j, count = 1;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		j = 1;
		while (j <= i) {
			cout << count;
			count++;
			j++;
		}
		i++;
		cout << endl;
	}
	return 0;
}
