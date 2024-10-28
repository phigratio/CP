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
  vector<ll> arr(n), arr1(n + 1);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }
  ll maxi = 0;
  ll cnt = 0;
  ll s = 0, e = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (i != n - 2 && arr1[i] <= arr1[i + 1])
    {
      cnt++;
      maxi = max(maxi, cnt);
    }
    else if (i == n - 2 && arr1[i] <= arr1[i + 1])
    {
      cnt++;
      maxi = max(maxi, cnt);
      e = i + 2;
      break;
    }
    else
    {
      if (maxi == cnt)
      {
        e = i + 1;
      }
      cnt = 0;
    }
  }
  cout << e - maxi << " " << e << endl;
}
int main()
{
  faster;
  ll t;
  cin >> t; // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}