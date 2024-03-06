#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
int n, m;
int f[40][40];

int main (void){
	cin >> n>>m;
	f[1][1] = 1;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			if (i == 1 && j == 1) continue;
			if (i % 2 || j % 2) 
				f[i][j] = f[i - 1][j] + f[i][j - 1];
		}
	}

	cout << f[n][m]<<endl;
	
	return 0;
}