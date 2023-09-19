#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
typedef long long LL;

const int N = 100010;

LL s[N], cnt[N];
LL n, k;
LL ans = 0;
int main (void){
	cin>>n>>k;

	for(int i=1;i<=n;i++){
		cin >> s[i];
		s[i] += s[i - 1];
	}


	
	cnt[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		ans += cnt[s[i] % k];
		cnt[s[i] % k]++;
	}

	/*for (int i = 1;i <= n;i++) {
		for (int j = i;j <= n;j++) {
			if ((s[j] - s[i-1]) % a == 0)
				ans++;
		}
	}*///�ᳬʱ

	cout << ans << endl;

	return 0;
}