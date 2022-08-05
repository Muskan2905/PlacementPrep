//Patterns
/*
*****
*****
*****
*****
*****
*/
//no of rows = no of columns

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j=1;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		while (j <= m) {
			cout << "*";
			j++;
		}
		i++;
		j = 1;
		cout << "\n";
	}
	return 0;
}
