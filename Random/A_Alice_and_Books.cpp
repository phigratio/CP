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
  ll mexi = 0;
  ll mexiInd = -1;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mexi = max(mexi, arr[i]);
    if (mexi == arr[i])
    {
      mexiInd = i;
    }
  }
  ll temp = arr[n - 1];
  sort(arr.begin(), arr.end());
  if (mexiInd == n - 1)
  {
    cout << mexi + arr[n - 2] << endl;
  }
  else
    cout << mexi + temp << endl;
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