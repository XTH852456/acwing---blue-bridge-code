#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
const int	N = 10e6;
int n;
int a[N],tmp[N];

void sort(int q[], int l, int r) {
	if (l >= r) return;
	int mid = (l + r) >>1;

	sort(q, l, mid);
	sort(q, mid+1,r);

	int i = l, j = mid + 1,k=1;
	while(i <= mid && j <= r) {
		if(q[i]<q[j]) tmp[k] = q[i],k++,i++;
		else tmp[k] = q[j],k++,j++;
	}
	
	while(i<=mid)tmp[k]=q[i],k++,i++;
	while(j<=r)tmp[k]=q[j],k++,j++;

	for (int i = l, j = 1;i <= r;i++,j++) {
		q[i] = tmp[j];
	}

}


int main (void){
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
	}

	sort(a, 1, n);

	for (int i = 1;i <= n;i++) {
		cout << a[i] << " ";
	}
	return 0;
}