//Patterns
/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
//no of rows = n, col -> n to 1

#include<iostream>
using namespace std;
int main() {
	int m, i = 1, j;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	while (i <= m) {
		j = m;
		while (j >= 1) {
			cout << j; // or instead n-j+1 than making changes all over the code
			j--;
		}
		i++;
		cout << endl;
	}
	return 0;
}
