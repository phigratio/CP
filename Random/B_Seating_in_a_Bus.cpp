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
  vector<ll> hesh(n + 1, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  hesh[arr[0]] = 1;
  bool flag = true;
  for (int i = 1; i < n; i++)
  {
    if (hesh[arr[i] - 1] == 1 or hesh[arr[i] + 1] == 1)
    {
      hesh[arr[i]] = 1;
    }
    else
    {
      flag = false;
      break;
    }
  }
  if (flag)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
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