//Patterns
/*
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/
//no of rows = no of columns, col = ith row

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j=1;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		while (j <= m) {
			cout << i;
			j++;
		}
		i++;
		j = 1;
		cout << endl;
	}
	return 0;
}
