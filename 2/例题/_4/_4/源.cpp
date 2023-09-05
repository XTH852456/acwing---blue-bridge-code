#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;

int n, m, q;
int L[1001][1001];
int S[1001][1001];

int main (void){
	cin >> n >> m >> q;

	for (int i = 1;i <= n;i++) {
		for (int j=1;j <= m;j++) {
			cin >> L[i][j];
			S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + L[i][j];
		}
	}
	int x1, x2, y1, y2;


	for (int i = 1;i <= q;i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout<<S[x2][y2]+S[x1-1][y1-1]-S[x1-1][y2] - S[x2][y1-1] << endl;

	}
	
}