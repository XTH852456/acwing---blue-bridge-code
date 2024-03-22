#define  _CRT_SECURE_NO_WARNINGS 1
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 10e5 + 10;
typedef long long LL;
int a[N],b[N], c[N],cnta[N],cntc[N],sa[N],sc[N];
int n;

int main (void){


	cin >> n;

	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		a[i]++;
	}
	for (int i = 1;i <= n;i++) {
		cin >> b[i];
		b[i]++;

	}
	for (int i = 1;i <= n;i++) {
		cin >> c[i];
		c[i]++;

	}

	for (int i = 1;i <= n;i++) {
		cnta[a[i]]++;
		cntc[c[i]]++;
	}
	for (int i = 1;i <= N;i++) {
		sa[i]=sa[i-1] + cnta[i];
		sc[i]=sc[i-1] + cntc[i];
	}

	LL ans = 0;

	for (int i = 1;i <= n;i++) {
		ans = ans + (LL)sa[b[i] - 1] * (sc[N] - sc[b[i]]);
	}


	cout << ans << endl;

	return 0;
}