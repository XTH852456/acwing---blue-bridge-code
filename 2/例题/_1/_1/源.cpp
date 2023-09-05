#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
const int a=100002;
int n,q;
int L[a];
int key;

int front(int h) {
	while (L[h-1] == key) {
		h--;
	}
	return h;

}

int back(int k) {
	while (L[k+1] == key) {
		k++;
	}

	return k;
}



void check(int u) {
	int q=front(u);
	int p=back(u);
	
	cout<<q<<' ';
	cout<<p<<' ';
	cout << endl;

}




int main (void){
	cin >> n >> q;
	for (int i = 0;i < n;i++){
		cin >> L[i];
	}

	

	for (int i = 0;i < q;i++) {
		cin >> key;
		int head = 0, tail = n, mid;
		while (head < tail-1) {
			mid = (head + tail) >> 1;

			if (L[mid] > key) {
				tail = mid;
				continue;
			}
			else if (L[mid] < key) {
				head = mid;
				continue;
			}
			else break;
		
		}
		if (L[mid] != key) {
			cout << "-1 -1" << endl;
			continue;
		}
		else check(mid);
	}




	
	

	return 0;
}