#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int maxi = 1e6 + 1;
#define pb push_back
#define F first
#define S second

void muqtu()
{
  ll m, n;
  cin >> n >> m;
  vector<ll> arr(m);
  for (int i = 0; i < m; i++)
  {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  vector<ll> gaps;
  if (m == 1)
  {
    gaps.pb(n - 1);
  }
  else
  {
    gaps.pb((n - arr[m - 1]) + (arr[0] - 1));
    for (int i = 1; i < m; i++)
    {
      gaps.pb(arr[i] - arr[i - 1] - 1);
    }
  }

  sort(gaps.rbegin(), gaps.rend());

  ll safe = 0;
  ll spread = 0;

  for (int i = 0; i < gaps.size(); i++)
  {
    ll curr = gaps[i] - spread;
    if (curr <= 0)
      break;
    if (curr == 1)
    {
      safe++;
      break;
    }
    else
    {
      safe += (curr - 1);
      spread += 4;
    }
  }

  cout << n - safe << endl;
}

int main()
{
  faster;
  int t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
