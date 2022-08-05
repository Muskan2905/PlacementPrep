//Alphabet pattern
/*
 A B C
 D E F
 G H I
*/
//no of rows = no of cols

#include<iostream>
using namespace std;
int main() {
	int m, i=1, j;
	char ch = 'A';
	cout << "Enter number of rows n columns" << endl;
	cin >> m;
	for (; i <= m; i++) {
		j = 1;
		for (; j <= m; j++) {
			cout << char(ch); 
			ch++;
		}
		cout << endl;
	}
	return 0;
}
