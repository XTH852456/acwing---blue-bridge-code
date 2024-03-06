



#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
const int N = 100010;
int son[N][26], cnt[N], idx;//son:统计子节点，cnt:统计次数
//下标是0的结点既是根结点又是空结点，就是没有子结点的结点也指向0
char str[N];
int insert(char str[])
{
    int p = 0;//从根节点出发
    for (int i = 0;str[i];i++) {//因为c++里面数组的结束符是/0，所以用str[i]来判断数组是否结束
        int u = str[i] - 'a';//编号，因为把a-z映射成0-25，所以减去a就行
        if (!son[p][u]) {
            son[p][u] = ++idx;//如果不存在该字母就插入
            int u = son[p][u];//编号
        }
    }
    return cnt[p]++;//计数
}
int query(char str[])
{
    int p = 0;//从根节点开始
    for (int i = 0;str[i];i++) {
        int u = str[i] - 'a';//找到当前对应子节点的编号
        if (!son[p][u]) return 0;
        p = son[p][u];
    }
    return cnt[p]++;
}
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char op[2];
        scanf("%s%s", &op, &str);
        if (op[0] = 'I')insert(str);
        else printf("%d", query(str));
    }
    return 0;
}
//# include <iostream>
//# include <stdio.h>
//
//using namespace std;
//
//int main (void){
//	long long n;
//	cin >> n;
//	while (n) {
//		cout << n << ' ';
//		n /= 2;
//	}
//
//	return 0;
//}