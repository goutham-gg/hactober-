#include <bits/stdc++.h>
using namespace std;
long n;
set<long long> s;
void solve()
{
    long long prod = 1;
    for (long i = 1; i < n; i++)
    {
        if (__gcd(i, n) == 1)
        {
            s.insert(i);
            prod *= i;
            prod %= n;
        }
    }
    if (prod != 1)
        s.erase(prod);
}
int main()
{
    cin >> n;
    solve();
    cout << s.size() << endl;
    for (long long i : s)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}