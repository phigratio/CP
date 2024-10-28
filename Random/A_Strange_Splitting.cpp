#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  if (arr[0] == arr[n - 1])
  {
    cout << "NO" << endl;
    return;
  }

  cout << "YES" << endl;
  string coloring(n, 'R');

  coloring[1] = 'B';

  cout << coloring << endl;
}

int main()
{
  faster;
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}