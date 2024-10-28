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
  vector<pair<ll, ll>> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].F;
    arr[i].S = i + 1;
  }
  sort(arr.begin(), arr.end());
  ll cnt = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if ((arr[i].F * arr[j].F) >= 2 * n)
      {
        break;
      }
      else if ((arr[i].F * arr[j].F) == (arr[i].S + arr[j].S))
      {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}

int main()
{
  faster;
  ll t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
