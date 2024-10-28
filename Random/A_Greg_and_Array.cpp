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
  ll n, m, k;
  cin >> n >> m >> k;

  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<pair<pair<ll, ll>, ll>> op(m);
  for (int i = 0; i < m; i++)
  {
    cin >> op[i].f.f >> op[i].f.s >> op[i].s;
  }

  vector<ll> diff(m + 1, 0);
  for (int i = 0; i < k; i++)
  {
    ll x, y;
    cin >> x >> y;
    diff[x - 1] += 1;
    diff[y] -= 1;
  }

  for (int i = 1; i < m; i++)
  {
    diff[i] += diff[i - 1];
  }

  for (int i = 0; i < m; i++)
  {
    op[i].s *= diff[i];
  }

  vector<ll> temp(n + 1, 0);
  for (int i = 0; i < m; i++)
  {
    temp[op[i].f.f - 1] += op[i].s;
    temp[op[i].f.s] -= op[i].s;
  }

  for (int i = 1; i < n; i++)
  {
    temp[i] += temp[i - 1];
  }

  for (int i = 0; i < n; i++)
  {
    arr[i] += temp[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
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
