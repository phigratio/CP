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

  sort(arr.rbegin(), arr.rend());
  bool flag = true;
  for (int i = 0; i < n / 2; i++)
  {
    if (arr[i] >= (arr[i + 1] + arr[i + 2]))
      flag = false;
  }
  if (flag)
  {
    cout << "YES" << endl;
    vector<ll> ans;
    for (int i = 0; i < n / 2; i++)
    {
      ans.pb(arr[i]);A
      ans.pb(arr[n - i - 1]);
    }
    if (n % 2)
    {
      ans.pb(arr[n / 2]);
    }

    for (auto x : ans)
    {
      cout << x << " ";
    }
    cout << endl;
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
  t = 1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}