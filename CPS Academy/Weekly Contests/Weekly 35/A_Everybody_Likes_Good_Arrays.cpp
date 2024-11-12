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
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll ans = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] % 2 == arr[i + 1] % 2)
    {
      if (arr[i + 1] % 2)
        arr[i + 1] = 1;
      else
        arr[i + 1] = 0;
      ans++;
    }
  }

  cout << ans << endl;
}
int main()
{
  faster;
  ll t;
  cin >> t;
  // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}

// thanks for watching my code