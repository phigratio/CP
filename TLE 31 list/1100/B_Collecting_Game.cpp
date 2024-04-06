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
  ll n;
  cin >> n;
  vector<pair<ll, ll>> arr(n);
  vector<ll> pref(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].f;
    arr[i].s = i;
  }
  sort(arr.begin(), arr.end());
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i].f;
    pref[i] = sum;
  }

  vector<ll> ans(n + 1, -1);
  stack<ll> store;
  for (int i = 0; i < n; i++)
  {
    store.push(arr[i].s);
    if (arr[i + 1].f > pref[i] or i == n - 1)
    {
      while (!store.empty())
      {
        ans[store.top()] = i;
        store.pop();
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
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