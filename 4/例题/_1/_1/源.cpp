#define  _CRT_SECURE_NO_WARNINGS 1
# include <cstring>
# include <iostream>
# include <algorithm>

using namespace std;
int n,ans=0;
int map[10000];

int main (void){
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin>> map[i];
	}

	for (int i = 1;i <= n;i++) {
		int minv = 100000,maxv=-100000;
		for (int j = i;j <= n;j++) {
			minv = min(map[j],minv);
			maxv = max(map[j],maxv);
			if ((maxv - minv) == (j - i)) ans++;
		}
	}

	cout<< ans << endl;
	return 0;
}