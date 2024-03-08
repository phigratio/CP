#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll a, b;
    cin >> a >> b;
    ll xk, yk;
    cin >> xk >> yk;
    ll xq, yq;
    cin >> xq >> yq;

    ll dx[8] = {a, a, -a, -a, b, -b, b, -b};
    ll dy[8] = {-b, b, -b, b, a, a, -a, -a};

    set<pair<ll, ll>> king;
    set<pair<ll, ll>> queen;
    for (int i = 0; i < 8; i++)
    {
      king.insert({xk + dx[i], yk + dy[i]});
      queen.insert({xq + dx[i], yq + dy[i]});
    }

    ll ans = 0;
    for (auto it = king.begin(); it != king.end(); it++)
    {
      if (queen.find(*it) != queen.end())
      {
        ans++;
      }
    }

    cout << ans << endl;
  }
}
