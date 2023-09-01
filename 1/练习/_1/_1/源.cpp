#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>
# include <math.h>

using namespace std;

int m, n;

int step = 1;
int ans[30];
int use[10] = {0};


void dsf(int u) {
	if (u == m + 1) {
		for (int i = 1;i <= m;i++) cout<<ans[i] << " ";
		cout << endl;
		return;
	}
	
	if (step == 1) {
		for (int j = 1;j <= n + 1 - m;j++) {
			step++;
			if (!use[j] && ans[u - 1] < j) {
				ans[u] = j;
				use[j] = 1;
			}
			else continue;
			dsf(u + 1);
			use[j] = 0;
			step++;
		}
	}
	else {
		for (int j = 1;j <= n;j++) {
			if (!use[j]&&ans[u-1]<j) {
				ans[u] = j;
				use[j] = 1;
			}
			else continue;
			dsf(u + 1);
			use[j] = 0;
			step++;
		}
	}


	

	


}



int main (void){
	cin>>n>>m;
	dsf(1);


	return 0;
}