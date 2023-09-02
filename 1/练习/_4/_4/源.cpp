#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>
# include <cstring>

using namespace std;

const int N = 110;
char start[N];
char aim[N];


int ans = 0;

void turn(int i) {
	if (aim[i] == '*') aim[i] = 'o';
	else aim[i] = '*';
}

int main (void){ 

	cin>>start>>aim;

	int length = strlen(start);

	for(int i = 0;i < length - 1;i++) {
		if (start[i] != aim[i]) {
			turn(i);
			turn(i+1);
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}