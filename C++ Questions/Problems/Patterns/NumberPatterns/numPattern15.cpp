//Pascal triangle pattern
/*
	            1
            1 2 1
			    1 2 3 2 1
        1 2 3 4 3 2 1 
*/

#include<iostream>
using namespace std;
int main() {
	int m, i, j,k;
	cout << "Enter the no of rows to be in pattern\n";
	cin >> m;
	for (i = 1; i <= m; i++) {
		//for spacing
		for (k = 1; k < m-i+1; k++) {
			cout << " ";
		}
		//after spacing
		for (j = 1; j <= i; j++) {
			cout << j;
		}
		//second half of the pattern
		for (k = i-1; i >= 2 && k>=1; k--) {  //can use while loop as well instead 
		//of applying condition for i >=2
			cout << k;
		}
		cout << endl;
	}
	return 0;
}
