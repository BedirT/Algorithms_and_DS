// CodeForce Contest
// http://codeforces.com/contest/629/problem/B

#include <cstdio>
#include <map>

using namespace std;

int n, sz, l, r, ans, male[500], female[500];
char type;
bool was[100001];
map <char, int> cnt;

void getans()
{
    ans = max(ans, min(cnt['M'], cnt['F']) * 2);
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf(" %c %d %d", &type, &l, &r);
        if (type == 'M')
            for (int j = l; j <= r; ++j)
                male[j]++;
        else
            for (int j = l; j <= r; ++j)
                female[j]++;
    }
    for (int i = 1; i <= 366; ++i)
        ans = max(ans, min(male[i], female[i]) * 2);
    printf("%d", ans);
}