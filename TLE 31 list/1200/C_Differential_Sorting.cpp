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
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  if (is_sorted(arr.begin(), arr.end()))
  {
    cout << 0 << endl;
  }
  else if (arr[n - 2] > arr[n - 1])
  {
    cout << -1 << endl;
  }
  else if ((arr[n - 2] - arr[n - 1]) > arr[n - 1] || (arr[n - 2] - arr[n - 1]) > arr[n - 2])
  {
    cout << -1 << endl;
  }
  else
  {
    cout << n - 2 << endl;
    for (int i = 0; i < n - 2; i++)
    {
      cout << i + 1 << " " << n - 1 << " " << n << endl;
    }
  }
}

int main()
{
  faster;
  int t;
  cin >> t; // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}
