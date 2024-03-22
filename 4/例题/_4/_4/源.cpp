#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>
# include <sstream>
# include <algorithm>

using namespace std;
int n, i = 1;
int a[10010];


int main(void) {
	cin >> n;
	string line;
	getline(cin, line);

	while (n--) {
		getline(cin, line);
		stringstream ssin(line);

		while (ssin >> a[i])i++;
	}

	sort(a, a + i);

	int ans1 = 0, ans2 = 0;
	for (int j = 1;j < i;j++) {
		if (a[j] == a[j + 1]) {
			ans2 = a[j];
		}
		if (a[j] + 2 == a[j + 1]) {
			ans1 = a[j] + 1;
		}
	}

	cout << ans1 << ' ' << ans2 << endl;
	return 0;
}