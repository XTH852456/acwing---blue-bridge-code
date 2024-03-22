#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
int n,ans=0;

int main (void){
	cin >> n;
	
	for (int i = 1;i <= n;i++) {
		int k = i;
		while (k)
		{
			int t = k % 10;
			k=k/10;
			if (t == 2 || t == 0 || t == 1 || t == 9) {
				ans += i;
				break;
			}
		}
	}

	cout<<ans << endl;
	return 0;
}