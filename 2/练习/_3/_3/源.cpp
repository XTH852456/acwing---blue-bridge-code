#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

const int N = 1e6;
int n, k;
int h[N], w[N];
int l = 1, r = 1e5;

bool check(int u) {
	int count = 0;
	for (int i = 1;i <= n;i++) {
		count += (h[i]/u) * (w[i] / u) ;
		if (count >= k) return true;
	}
	return false;
}


int main (void){
	cin>>n>>k;

	for (int i = 1;i <= n;i++) {
		cin >> h[i] >> w[i];
	}

	int mid = 0;

	while (l < r) {
		mid = l + r+1 >> 1;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}

	cout << r;
	return 0;
}