#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void func()
{
    int n, ans = 0, kick = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<int> Flipy(n, -1);
    for (int i = 29; i >= 0; i--)
    {
        int Possi = 1;
        for (int j = 0; j < n; j++)
        {
            if (Flipy[j] != -1)
            {
                if (Flipy[j] == 1)
                    Possi = ((Possi & (b[j] >> i) & 1));
                else
                    Possi = ((Possi & (a[j] >> i) & 1));
                continue;
            }
            if (((a[j] >> i) & 1) || ((b[j] >> i) & 1))
            {
            }
            else
            {
                Possi = 0;
                break;
            }
        }
        if (!Possi)
            continue;
        int value = 1;
        for (int j = 0; j < n; j++)
        {
            if (Flipy[j] != -1)
            {
                if (Flipy[j] == 1)
                    value = ((value & (b[j] >> i) & 1));
                else
                    value = ((value & (a[j] >> i) & 1));
                continue;
            }
            if (((a[j] >> i) & 1) && ((b[j] >> i) & 1))
            {
            }
            else if (((a[j] >> i) & 1))
                Flipy[j] = 0;
            else if (((b[j] >> i) & 1))
                Flipy[j] = 1, kick++;
            else
            {
                value = 0;
                break;
            }
        }
        ans += (value * (1ll << i));
    }
    cout << ans << " " << kick << '\n';
}

int main()
{
    fastio 
    int test;
    cin >> test;
    for (int i = 0; i < test; ++i)
    {
        
        func();
    }
    return 0;
}