#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll maxi = 1e6 + 1;
#define pb push_back
#define f first
#define s second
void muqtu()
{
  ll n, k;
  cin >> n >> k;
  vector<pair<int, int>> p;

  for (int i = 0; i < n; i++)
  {
    ll a, b;
    cin >> a >> b;
    p.pb({a, b});
  }
  sort(p.rbegin(), p.rend());

  pair<ll, ll> ans = p[k - 1];
  ll cnt = 0;
  ll minus = k - 2;
  ll plus = k;
  while (minus >= 0)
  {
    pair<ll, ll> check = p[minus];
    if (ans == check)
    {
      cnt++;
      minus--;
    }
    else
    {
      break;
    }
  }
  while (plus < n)
  {
    pair<ll, ll> check = p[plus];
    if (ans == check)
    {
      cnt++;
      plus++;
    }
    else
    {
      break;
    }
  }

  cout << cnt + 1 << endl;
}

int main()
{
  faster;
  ll t;
  t = 1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}