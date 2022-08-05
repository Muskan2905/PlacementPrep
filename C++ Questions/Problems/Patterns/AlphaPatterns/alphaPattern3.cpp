//Alphabet pattern
/*
 A A A
 B B B
 C C C
*/
//no of rows = no of cols, rows as per alphabet order

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
			cout << char(ch); // or instead char(ch+i-1) than making changes all over the code
			// and not making ch increased by 1
		}
		ch++;
		cout << endl;
	}
	return 0;
}
