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
#define F first
#define S second
void muqtu()
{
  ll n;
  cin >> n;
  vector<ll> arr1(n), arr2(n);
  vector<ll> hesh(n + 1, 1);
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> arr2[i];
  }
  ll j = 0;
  for (int i = 0; i < n; i++)
  {
    if (hesh[arr2[i]] == 0)
    {
      cout << 0 << " ";
    }
    else
    {
      ll cnt = 0;

      while (arr1[j] != arr2[i])
      {
        hesh[arr1[j]] = 0;
        j++;
        cnt++;
      }
      if (hesh[arr2[i]] != 0)
      {
        cnt++;
        j++;
        hesh[arr2[i]] = 0;
      }

      cout << cnt << " ";
    }
  }
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