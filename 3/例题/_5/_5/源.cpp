#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

int t, r, c;
int map[110][110];
int f[110][110];

int main (void){
	cin >> t;
	for (int i = 1;i <= t;i++ ) {
		cin >> r >> c;
		for (int i = 1;i <= r;i++) {//读取
			for (int j = 1;j <= c;j++) {
				cin >> map[i][j];
			}
		}

		f[1][1] = map[1][1];
		for (int i = 1;i <= r;i++) {
			for (int j = 1;j <= c;j++) {
				f[i][j] = max(f[i-1][j]+map[i][j], f[i][j-1] + map[i][j]);
			}
		}
		cout << f[r][c] << endl;


	}

	return 0;
}