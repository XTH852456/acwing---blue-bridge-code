#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
const int N = 10e5 + 10;
typedef long long LL;
int a[N],tmp[N];
int n;

LL sort(int q[ ], int l, int r) {
	     if(l>=r) return 0;
		 int mid = l + r >> 1;
		 int i = l, j = mid + 1, k = 1;

		 LL ans=sort(q, l, mid) + sort(q, mid + 1, r);
		

		 while (i <= mid && j <= r) {
			 if (q[i] <= q[j]) {
				 tmp[k] = q[i];
			 	 k++,i++;
			 }
			 else  {
				 ans += mid - i + 1;
				 tmp[k] = q[j]; 
				 k++,j++;
			 }
		 }
		 while (i <= mid) {
			 tmp[k]= q[i];
			 k++, i++;
		 }
		 while (j <= r) {
			 tmp[k] = q[j];
			 j++, k++;
		 }

		 for (int i = l,j=1;i <= r;i++,j++) {
			 q[i]= tmp[j];
		 }
		 return ans;
}


int main (void){
	cin>> n;
	for (int i = 1; i <= n; i++) {
		cin>> a[i];
	}

	cout<<sort(a,1,n)<<endl;


	return 0;
}