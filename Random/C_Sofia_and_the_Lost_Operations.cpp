#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void muqtu()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  vector<ll> arrFound(n);
  map<ll, ll> mpF;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> arrFound[i];
    mpF[arrFound[i]] = 1;
  }
  ll m;
  cin >> m;
  map<ll, ll> modifications;
  ll last;
  for (int i = 0; i < m; i++)
  {
    ll x;
    cin >> x;
    modifications[x]++;
    if (i == m - 1)
    {
      last = x;
    }
  }

  bool possible = true;
  // Check the difference between arr and arrFound
  vector<pair<ll, ll>> needed_changes;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != arrFound[i])
    {
      needed_changes.push_back({i, arrFound[i]});
    }
  }

  for (auto &change : needed_changes)
  {
    if (modifications[change.second] > 0)
    {
      modifications[change.second]--;
    }
    else
    {
      possible = false;
      break;
    }
  }

  if (mpF.find(last) == mpF.end())
  {
    possible = false;
  }

  if (possible)
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
