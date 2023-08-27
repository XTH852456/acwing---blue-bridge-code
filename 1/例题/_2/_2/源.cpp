#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>
# include <vector>

using namespace std;


const int N = 10;
int n;
int st[N];
bool use[N];
void dsf(int u){
	if (u > n) {
		for (int i = 1;i<=n;i++) cout << st[i] << " ";
		cout << endl;
		return;
	}
	for (int i = 1;i <= n;i++) {
		if (!use[i]) {
			st[u] = i;
			use[i] = true;
			dsf(u + 1);

			st[u] = 0;
			use[i] = false;
		}

		
	}
}


int main (void){
	cin >> n;

	dsf(1);

	return 0;
}