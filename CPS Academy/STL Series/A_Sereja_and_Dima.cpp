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
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll sr = 0;
  ll de = 0;
  ll i = 0, j = n - 1;
  ll k = 0;
  while (i <= j)
  {
    if (arr[i] < arr[j])
    {
      if (k % 2 == 0)
      {
        sr += arr[j];
      }
      else
      {
        de += arr[j];
      }
      j--;
    }
    else
    {
      if (k % 2 == 0)
      {
        sr += arr[i];
      }
      else
      {
        de += arr[i];
      }
      i++;
    }
    k++;
  }
  cout << sr << " " << de << endl;
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