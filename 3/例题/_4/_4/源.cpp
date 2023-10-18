#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>
#include <vector>

using namespace std;
int m, n;
int w[1010], v[1010], f[1010][1010];

int main (void){
	cin>>m>>n;

	for (int i = 1;i <= m;i++)cin >> w[i] >> v[i];

	for (int i = 1;i <= m;i++) {
		for (int j = 0;j <= n;j++) {
			f[i][j] = f[i - 1][j];
			if (j >= v[i])f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);
		}
	}

	cout << f[m][n] << endl;
	return 0;
}