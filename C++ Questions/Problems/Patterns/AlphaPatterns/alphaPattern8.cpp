//Triangular Alphabet pattern
/*
 A 
 B C
 D E F
 G H I J
*/
//no of rows, no of cols are as per ith row

#include<iostream>
using namespace std;
int main() {
	int m, i = 1, j;
	char ch = 'A';
	cout << "Enter no of rows to be in pattern\n";
	cin >> m;
	for (; i <= m; i++) {
		for (j = 1; j <= i; j++) {
			cout << ch;
			ch++;
		}
		cout << endl;
	}
	return 0;
}
