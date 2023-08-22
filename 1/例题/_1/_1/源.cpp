#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>


const int N = 16;
int n;
int st[N];

using namespace std;

void dsf(int u) {

	if (u > n) {
		for (int i =1;i <= n;i++) {
			if (st[i] == 1)
				cout << i << " ";
		}
		cout << endl;
		return;
	}

	st[u] = 2;
	dsf(u + 1);
	st[u] = 0;//»Ö¸´ÏÖ³¡

	st[u] = 1;
	dsf(u + 1);
	st[u] = 0;

}



int main (void){

	cin >> n;

	dsf(1);


	return 0;
}