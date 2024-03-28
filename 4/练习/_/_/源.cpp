//#define  _CRT_SECURE_NO_WARNINGS 1
//# include <iostream>
//# include <stdio.h>
//# include <algorithm>
//
//using namespace std;
//int n, m, t;
//const int N = 10e5 + 10;
//typedef pair<int, int>PII;
//PII val[N];
//bool st[N];
//int count[N];
//int last[N];
//
//int main (void){
//	cin>>n>>m>>t;
//
//	for (int i = 1;i <= m;i++) {
//		cin >> val[i].first;
//		cin>> val[i].second;
//	}
//	sort(val, val + n);
//
//	for (int i = 1;i <= m;) {
//		int j = i;
//		while(j<=m&&val[i]==val[j]) j++;
//		int t=val[i].first , id=val[i].second,score=(j-i)*2;
//		i = j;
//
//		score[id]=score[id]-(t-last[id]-1);
//	}
//
//
//
//	return 0;
//}
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

#define x first
#define y second

using namespace std;

typedef pair<int, int> PII;

const int N = 100010;

int n, m, T;
int score[N], last[N];
bool st[N];

PII order[N];

int main()
{
    scanf("%d%d%d", &n, &m, &T);
    for (int i = 0; i < m; i++) scanf("%d%d", &order[i].x, &order[i].y);
    sort(order, order + m);

    for (int i = 0; i < m;)
    {
        int j = i;
        while (j < m && order[j] == order[i]) j++;
        int t = order[i].x, id = order[i].y, cnt = j - i;
        i = j;

        score[id] -= t - last[id] - 1;
        if (score[id] < 0) score[id] = 0;
        if (score[id] <= 3) st[id] = false; // 以上处理的是t时刻之前的信息

        score[id] += cnt * 2;
        if (score[id] > 5) st[id] = true;

        last[id] = t;
    }

    for (int i = 1; i <= n; i++)
        if (last[i] < T)
        {
            score[i] -= T - last[i];
            if (score[i] <= 3) st[i] = false;
        }

    int res = 0;
    for (int i = 1; i <= n; i++) res += st[i];

    printf("%d\n", res);

    return 0;
}

