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
  while (cin >> n)
  {
    vector<ll> arr(n + 1);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    vector<bool> diff(n - 1, false);
    for (int i = 1; i < n; i++)
    {
      ll d = abs(arr[i] - arr[i - 1]);
      if (d >= 1 and d <= n - 1)
        diff[d - 1] = true;
    }
    bool flag = false;
    for (bool x : diff)
    {
      if (!x)
      {
        flag = true;
        break;
      }
    }
    if (flag)
      cout << "Not jolly" << endl;
    else
    {
      cout << "Jolly" << endl;
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