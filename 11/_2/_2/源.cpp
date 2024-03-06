#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

string n,ans;
int main (void){
	cin >> n;
	for (int i = 0;i < n.size();i++)
	{
		if (i+1<n.size()&& ('0' <= n[i + 1]&&n[i+1]<='9'))
		{
			int k = n[i + 1] - '0';
			while (k--) {
				ans += n[i];
			}
			i++;
		}
		else {
			ans += n[i];
		}
	}

	cout << ans;

	return 0;
}