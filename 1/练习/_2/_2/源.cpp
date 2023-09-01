#define  _CRT_SECURE_NO_WARNINGS 1
# include <iostream>
# include <cstring>

using namespace std;


int ans = 0;
int n;
bool use[10];
bool backup[10];

bool check(int a,int c){
	long long b = n * (long long)c - a * c;
	if (!a || !b || !c) return false;//a b c����Ϊ0
	memcpy(backup, use, sizeof use);//���ж����鱸�����ж�
	//���b���Ƿ��������Ѿ��ù���
	while (b) {
		int x = b % 10;
		b = b / 10;
		if (!x || backup[x]) return false;
		backup[x] = true;
	}

	//������������Ƿ��Ѿ�ʹ��
	for (int i = 1;i <= 9;i++) {
		if (!backup[i])
			return false;
	}

	return true;

}

void dsf_c(int u, int a, int c) {
	if (u > 9) return;
	if (check(a,c))ans++;

	for (int i = 1;i <= 9;i++) {
		if (!use[i]) {
			use[i] = true;
			dsf_c(u + 1, a ,c* 10 + i);
			use[i] = false;
		}
	}
}



//u����Ѿ�ʹ�õĸ���
void dsf_a(int u,int a) {//�ݹ��ҳ����в��ظ����ֵĿ��ܵ�a
	if (a >= n) return;
	if (a) dsf_c(u, a, 0);

	for (int i = 1;i <= 9;i++) {
		if (!use[i]) {
			use[i] = true;
			dsf_a(u + 1, a * 10 + i);
			use[i] = false;
		}
	}
}

int main (void){


	cin >> n;

	dsf_a(0,0);

	cout << ans;

	return 0;
}