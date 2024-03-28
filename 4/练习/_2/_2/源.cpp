#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <stdio.h>
#include  <algorithm>
using namespace std;
int a, b, c,k=1;
int day[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31 };
int year[4],month[4], date[4];	
string str[5];
char ch[20];


void check(int a,int b,int c) {
	if (a <= 60) {
		if (c > day[b] || b > 12 ||c==0||b==0)return ;
		else {
			sprintf(ch, "20%02d-%02d-%02d", a, b, c);
			string tmp(ch);
			str[k++] = tmp;
		}
	}
	else if (a >= 59) {
		if (c > day[b]||b>12 || b == 0 || c == 0)return;
		else {
			sprintf(ch,"19%02d-%02d-%02d", a, b, c);
			string tmp(ch);
			str[k++] = tmp;
		}
	}
}

int main (void){
	scanf("%d/%d/%d", &a, &b, &c);
	check(a,b,c);
	check(c,a,b);
	check(c,b,a);
	sort(str+1, str+k);
	for (int i = 1; i < k; i++) {
		if (str[i] != str[i + 1]) {
			cout << str[i] << endl;
		}
		else
			continue;
		
	} 

	return 0;
} 

