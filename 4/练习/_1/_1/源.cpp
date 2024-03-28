#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>

using namespace std;
int w, m, n; 

int main (void){
	cin>>w>>m>>n;
	m--,n--;

	int y1 = m / w,y2 = n / w;
	int x1 = m%w,x2 = n % w;
	if (y1 % 2) x1 =w-1-x1 ;
	if (y2 % 2) x2 =w-1-x2 ;

	cout<<abs(y1-y2)+abs(x1-x2)<<endl;	

	return 0;
}