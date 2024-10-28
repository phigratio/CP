#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define pb push_back
void muqtu()
{
  ll n;
  cin >> n;
  vector<ll> x(n - 1);
  for (int i = 0; i < n - 1; i++)
  {
    cin >> x[i];
  }

  vector<ll> a;
  a.pb(x[n - 2]);
  a.pb(1e9);
  for (int i = n - 3; i >= 0; i--)
  {
    a.pb(a.back() - x[i]);
  }
  reverse(a.begin(), a.end());
  for (ll y : a)
  {
    cout << y << " ";
  }
  cout << endl;
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
