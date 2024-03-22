#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
const int N = 1010, mod = 100000007;
int f[N][N];
int s, n, a, b;

int getmod(int a, int b) {
	return (a % b + b) % b;
}

int main(void) {
	cin >> n >> s >> a >> b;
	f[0][0] = 1;

	for (int i = 1;i < n;i++) {
		for (int j = 0;j < n;j++) {
			f[i][j] = (f[i - 1][getmod(j - (n - i) * a, n)] + f[i - 1][getmod(j + b * (n - i), n)]) % mod;
		}
	}
	cout << f[n - 1][getmod(s, n)] << endl;

	return 0;
}
