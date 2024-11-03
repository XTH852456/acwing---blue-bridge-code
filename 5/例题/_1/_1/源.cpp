#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
const int N = 10e5 + 10;
int n, m;
int a[N];
int c[N];


int lowbbit(int x) {
	return x & -x;
}

void add(int x, int v) {
	for (int i = x; i <= n; i += lowbbit(i)) {
		c[i] += v;
	}
}

int check(int x) {
	int res = 0;
	for (int i = x; i; i -= lowbbit(i)) {
		res += c[i];
	}
	return res;
}

int main (void){
	/*cin>>n>>m;
	for (int i = 1; i <= n; i++) {
		cin>>q[i];
	}
	for (int i = 1;i <= n;i++) {
		q[i] += q[i - 1];
	}

	for (int i = 1;i <= m;i++) {
		int k, a, b;
		cin>>k>>a>>b;
		if(k==0)cout<<q[b]-q[a-1]<<endl;
		if (k == 1) {
			for(int j=a;j<=n;j++)q[j]+=b;
		}
	}*/
	//前缀和会发生超时的问题 尝试线段树


	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for (int i = 1;i <= n;i++)add(i, a[i]);
	
		while (m--) {
			int k, a, b;
			cin>>k>>a>>b;
			if (k == 0)cout << check(b) - check(a - 1) << endl;
			else add(a, b);
		 }


	return 0;
}