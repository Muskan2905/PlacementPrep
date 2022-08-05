//Triangular Alphabet pattern
/*
 A 
 B C
 C D E
 D E F G
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
		ch = 'A' + i-1;
		for (j = 1; j <= i; j++) {
			cout << ch;
			ch++;
		}
		cout << endl;
	}
	return 0;
}
