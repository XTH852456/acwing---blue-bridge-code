#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

int L=-10000;
int R=10000;

int main (void){
	double a,mid;
	cin >> a;
	while (true) {
		 mid = (L + R) >> 1;
		if (mid * mid * mid > a) {
			R = mid;
		}
		else if (mid * mid * mid < a) {
			L = mid;
		}
		else
			break;
	}
	printf("%.6f", mid);

	return 0;
}