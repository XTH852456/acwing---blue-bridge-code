#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>
# include <string>
# include <algorithm>

using namespace std;
typedef long long LL;
int ans;
LL date1,date2;

bool check(string n) {
	string k = n;
	reverse(n.begin(), n.end());
	if (k == n) {
		return true;
	}
	else
		return false;	
}

int main (void){
	cin >> date1;
	cin >> date2;

	for (int i = date1;i <= date2;i++) {
		if (check(to_string(i))) {
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}