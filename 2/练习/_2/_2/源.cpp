#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>
# include <cmath>

using namespace std;

int key;
int a, b, c, d;

int main (void){
	cin >> key;

	for (a = 0;a*a < key;a++) {
		for (b = a;a*a+b*b < key;b++) {
			for (c = b;a*a + b*b+c*c < key;c++) {
				int t = key - a * a - b * b - c * c;
				if (t < c*c) break;
				d = sqrt(t);
				if (d * d == t) {
					printf("%d %d %d %d", a, b, c, d);
					return 0;
				}
			}
		}
	}


	return 0;
}