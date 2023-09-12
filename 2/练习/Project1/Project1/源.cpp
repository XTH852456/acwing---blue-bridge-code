#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
const int MAX = 1e5;

int H[MAX];
int n;
bool check(int e) {
	for (int i = 1;i <= n;i++) {
		e = 2 * e - H[i];
		if (e >= 1e5) return true;
		else if (e < 0) return false;
	}
	return true;
}


int main (void){
	
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		scanf("%d", &H[i]);
	}

	int l = 0, r = 1e5;
	while (l < r) {
		int mid = (l+r) / 2;
		if (check(mid))r = mid;
		else l = mid + 1;
	}
	cout << r;
	return 0;
}