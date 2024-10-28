#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define pb push_back
#define f first
#define s second

void muqtu()
{
  ll n;
  cin >> n;

  ll arr[n + 1];

  bool flag = true;

  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    arr[i] = min(arr[i], 2ll);
    if (i != 1 and arr[i] < arr[i - 1])
    {
      flag = false;
    }
  }

  if (!flag)
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
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
