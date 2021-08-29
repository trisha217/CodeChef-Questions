#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void func()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    ll first = vec[0];
    for (ll i = 1; i < n; i++)
    {
        if (vec[i] > first)
        {
            cout << -1 << endl;
            return;
        }
    }
    stack<ll> st;
    for (ll i = 1; i < n; i++)
    {
        while (st.size()!=0 && st.top() <= vec[i])
        {
            st.pop();
        }
        st.push(vec[i]);
    }
    ll res = 0;

    while (!st.empty())
    {
        res++;
        st.pop();
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        func();
    }
    return 0;
}