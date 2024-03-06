#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

int n;
const int N = 1010;
int A[N];
int f[N];

int main(void) {
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> A[i];
	}

	int res = 0;

	for (int i = 1;i <= n;i++) {
		f[i] = 1;
		for (int j = 1;j < i;j++) {
			if (A[i] > A[j]) f[i] = max(f[i], f[j] + 1);
		}
		res = max(res, f[i]);
	}

	cout << res << endl;

	return 0;
}