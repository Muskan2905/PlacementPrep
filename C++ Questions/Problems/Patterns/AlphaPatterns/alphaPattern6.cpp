//Alphabet pattern
/*
 A B C
 B C D
 C D E
*/
//no of rows = no of cols

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j;
	char ch;
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	for (; i <= m; i++) {
		j = 1;
		ch = 'A';
		for (; j <= m; j++) {
			cout << char(ch + i - 1);
			ch++;
		}
		cout << endl;
	}
	return 0;
}
