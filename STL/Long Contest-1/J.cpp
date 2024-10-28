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
  ll n, m;
  cin >> n >> m;
  vector<ll> arrR(n);
  vector<ll> arrD(m);

  for (int i = 0; i < n + m; i++)
  {
    ll x;
    cin >> x;
    if (x == 1)
    {
      if (i < m)
        arrD[i] = 1;
      else
        arrR[i - m] = 1;
    }
  }
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    arrR[i] = x;
  }
  for (int i = 0; i < m; i++)
  {
    ll x;
    cin >> x;
    arrD[i] = x;
  }

  sort(arrR.begin(), arrR.end());
  vector<ll> ans(m, 0);
  ll prev = 0;
  for (int i = 0; i < m; i++)
  {
    ll d1 = arrD[i];
    ll d2 = (i < m - 1) ? arrD[i + 1] : INF;

    while (prev < n)
    {
      ll dis = arrR[prev];
      ll dis1 = abs(dis - d1);
      ll dis2 = abs(dis - d2);

      if (dis1 <= dis2)
      {
        prev++;
        ans[i]++;
      }
      else
      {
        break;
      }
    }
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
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
