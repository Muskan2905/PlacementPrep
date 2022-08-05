//Alphabet pattern
/*
 A B C
 A B C
 A B C
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
		ch = 'A';
		for (; j <= m; j++) {
			cout << char(ch); // or instead char(ch+j-1) than making changes all over the code 
			// and not making ch increased by 1
			ch++;
		}
		cout << endl;
	}
	return 0;
}
