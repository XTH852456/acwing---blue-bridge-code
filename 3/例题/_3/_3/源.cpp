#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

int n;
int main (void){
	cin >> n;
	int t, ans = 0;
	if (n <= 2) cout << n << endl;
	else {
		ans += n;
		while (n >= 3) {
			ans += n/3;
			n = n / 3 + n % 3;
		}
		cout << ans << endl;
	}
	
	return 0;
}