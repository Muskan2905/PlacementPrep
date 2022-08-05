//Triangular Alphabet pattern
/*
D
C D
B C D
A B C D
*/
//no of rows, no of cols are as per ith row

#include<iostream>
using namespace std;
int main() {
	int m, i = 1, j;
	char ch;
	cout << "Enter no of rows to be in pattern\n";
	cin >> m;
	for (; i <= m; i++) {
		ch = 'D';
		for (j = 1; j <= i; j++) {
			cout << char(ch - (i-1));
			ch++;
		}
		cout << endl;
	}
	return 0;
}
