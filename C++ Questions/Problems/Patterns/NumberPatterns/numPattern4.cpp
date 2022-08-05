//Patterns
/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
//no of rows = n, col -> 1 to n

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j=1;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		while (j <= m) {
			cout << j;
			j++;
		}
		i++;
		j = 1;
		cout << endl;
	}
	return 0;
}
