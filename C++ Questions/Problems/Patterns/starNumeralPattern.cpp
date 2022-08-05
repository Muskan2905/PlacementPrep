//Dabangg pattern
/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
//for n = 5

#include<iostream>
using namespace std;
int main() {
	int m, i, j;
	cout << "Enter number of rows to be in dabangg pattern\n";
	cin >> m;

		for (i = 1; i <= m; i++) {
		//first square
			//first triangle
			for (j = 1; j <= m - i + 1; j++) {
				cout << j<<" ";
			}

		//second triangle
			for (j = 1; i > 1 && j <= i - 1; j++) {
				cout << "* ";
			}

		//second square
			//first triangle
			for (j = 1; i > 1 && j <= i - 1; j++) {
				cout << "* ";
			}

			//second triangle
			for (j = m-i+1; j>=1 && j<=m-i+1; j--) {
				cout << j <<" ";
			}
			cout << endl;
		}
	return 0;
}
