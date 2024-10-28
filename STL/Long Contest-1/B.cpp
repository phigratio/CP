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
  if (n == 2)
    cout << "2 1" << endl;
  else if (n == 3)
  {
    cout << "-1" << endl;
  }
  else
  {
    vector<ll> ans(n);
    ans[0] = n;
    ans[1] = n - 1;
    for (int i = 2; i < n; i++)
    {
      ans[i] = i - 1;
    }

    for (int i = 0; i < n; i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
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