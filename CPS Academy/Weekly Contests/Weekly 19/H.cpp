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
  ll ansL = 0;
  ll ansR = n - 1;
  ll l = arr[0];
  ll r = arr[n - 1];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] != arr[i + 1])
    {
      break;
    }
    ansL = i;
  }

  for (int i = n - 1; i >= 0; i--)
  {
    if (arr[i] != arr[i - 1])
    {
      break;
    }
    ansR = i;
  }

  ll ans = min(ansL, ansR);
  cout << n - ans - 1 << endl;
  // ll s = 0, e = n - 1;
  // ll foundL = 0, foundR = 0;
  // while (s <= e)
  // {
  //   if (arr[s] == arr[e])
  //   {
  //     if (arr[s + 1] == arr[s] and arr[e - 1] == arr[e])
  //     {
  //       s++;
  //       e--;
  //     }
  //     else if (arr[s + 1] == arr[s] and arr[e - 1] != arr[e])
  //     {
  //       foundL = 0;
  //       foundR = e;
  //       break;
  //     }
  //     else
  //     {
  //       foundL = s;
  //       foundR = n - 1;
  //       break;
  //     }
  //   }
  //   else
  //   {
  //     foundL = s;
  //     foundR = e;
  //     break;
  //   }
  // }
  // cout << abs(foundL - foundR) << endl;
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