#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0)

const int MAX = 5E5 + 5;
const int MOD = 1E9 + 7;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

bool isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl '\n'
#define MOD 1e9 + 7
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define ite(a) for (auto &x : a)
#define read(a) ite(a) cin >> x;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
/*----------------------------------------------------------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------------------------------------------------------*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        k--;
        vector<int> vec(n);
        ll max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
           cin>>vec[i];
           if(vec[i]>max)
           {
               max = vec[i];
           }
        }
        ll p = 0;
        for (int i = 0; i < n; i++)
        {
            ll x = i + k;
            if (x < n && vec[x] == max)
            {
                p = p + (n - x);
            }
        }
        cout << p <<endl;
    }
    return 0;
}