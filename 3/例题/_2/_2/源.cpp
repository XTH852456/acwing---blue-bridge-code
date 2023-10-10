#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
int n;
int x[51];
int main (void){
	cin >> n;
	for (int i = 0;i <= n;i++) cin >> x[i];

	int left = 0, right = 0;//left右边向左走 right左边向右走
	for (int i = 0;i < n;i++) {
		if (abs(x[i]) > abs(x[0]) && x[i] < 0) left++;
		else if (abs(x[i]) < abs(x[0]) && x[i] > 0) right++;
	}

	if ((x[0] > 0 && left == 0) || (x[0] < 0) && right == 0) cout << 1 << endl;
	else cout<<left+right+1<<endl;

	return 0;
}