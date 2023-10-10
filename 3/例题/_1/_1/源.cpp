#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

int n, m;
int main(void) {
	cin >> n >> m;

	cout << ((n - 1) * (m - 1) - 1) << endl;
	return 0;
}