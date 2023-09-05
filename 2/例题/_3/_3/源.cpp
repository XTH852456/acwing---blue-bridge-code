#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

int n, m;
const int N = 100010;
int L[N];
int S[N];
//int ans = 0;

int main (void){
	cin >> n >> m;

	for (int i = 1;i <= n;i++) {
		cin >> L[i];
		S[i] = S[i - 1] + L[i];
	}

	while (m--) {
		int l, r;
		cin>>l>>r;
		cout<<S[r]-S[l-1]<<endl;
	}



	/*cin>>n>>m;

	for (int i = 1;i <= n;i++) cin >> L[i];
	
	while (m--) {
		int l,r;
		cin >>l>>r;
		for ( int j = l;j <= r;j++) {
			ans += L[j];
		}
		cout << ans << endl;
	}*/

	return 0;
}