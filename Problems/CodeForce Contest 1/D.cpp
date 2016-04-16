// CodeForce Contest
// http://codeforces.com/contest/629/problem/D

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int n, x, y, sz;
double pi = 3.141592653589793;
double tree[4000001];
double ans;
struct qwe
{
    int pos, order;
    double volume;
} a[100001];

bool cmp(qwe a, qwe b)
{
    return a.volume < b.volume;
}
bool cmp1(qwe a, qwe b)
{
    return a.pos < b.pos;
}
void update(int x)
{
    for (int j = x / 2; j >= 1; j /= 2)
        tree[j] = max(tree[j * 2], tree[j * 2 + 1]);
}
void find(int l, int r)
{
    ans = 0.;
    while (l <= r)
    {
        if (l % 2 == 1)
            ans = max(ans, tree[l]);
        if (r % 2 == 0)
            ans = max(ans,tree[r]);
        l++, r--, l /= 2, r /= 2;
    }
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x >> y;
        a[i].volume = x * x * pi * y * 1.;
        a[i].pos = i;
    }
    sort (a + 1, a + n + 1, cmp);
    a[1].order = 1;
    int num = 1;
    for (int i = 2; i <= n; ++i)
        if (a[i].volume == a[i - 1].volume)
            a[i].order = num;
        else a[i].order = ++num;
    sort (a + 1, a + n + 1, cmp1);
    sz = 1;
    while (sz < n) sz *= 2;
    tree[a[1].order + sz - 1] = a[1].volume;
    update(a[1].order + sz - 1);
    for (int i = 2; i <= n; ++i)
    {
        find(sz, a[i].order + sz - 2);
        tree[a[i].order + sz - 1] = a[i].volume + ans * 1.;
        update(a[i].order + sz - 1);
    }
    printf("%.10f", tree[1]);
    return 0;
}
