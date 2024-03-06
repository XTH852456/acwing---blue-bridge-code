#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

const int N = 52;
int f[N][N];
int n, m, k;
int ans = 0;

void dsf(int i, int j,int count,int a) {
	if (i == n && j == m) {
		if (count == k) {
			ans++;
			return;
		}
		if (f[i][j] > a) {
			count++;
			if (count == k)
				ans++;
		}
		return;
	}

	if (i == n) {
		dsf(i, j + 1, count, a);
	}
	else if (j == m) {
		dsf(i + 1, j, count, a);
	}
	else {
		dsf(i, j + 1, count, a);
		dsf(i + 1, j, count, a);
	}

	if (f[i][j] > a) {
		a = f[i][j];
		count++;
		if (i == n) {
			dsf(i, j + 1, count, a);
		}
		else if (j == m) {
			dsf(i + 1, j, count, a);
		}
		else {
			dsf(i, j + 1, count, a);
			dsf(i + 1, j, count, a);
		}
	}

	

}



int main (){
	cin>>n>>m>>k;

	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			cin >> f[i][j];
		}
	}
	dsf(1,1,0,-1);

	cout<<ans% 1000000007;
	return 0;
}