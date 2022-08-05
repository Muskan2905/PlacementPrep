//Triangular Alphabet pattern
/*
 A 
 B B
 C C C
 D D D D
*/
//no of rows, no of cols are as per ith row

#include<iostream>
using namespace std;
int main() {
	int m, i = 1, j;
	char ch = 'A';
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	for (; i <= m; i++) {
		j = 1;
		for (; j <= i; j++) {
			cout << ch;
		}
		ch++;
		cout << endl;
	}
	return 0;
}
