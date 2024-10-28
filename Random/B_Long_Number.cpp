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
  string a;
  cin >> a;
  vector<ll> arr(11);
  for (int i = 1; i <= 9; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    ll num = a[i] - '0';
    if (num <= arr[num])
    {
      a[i] = (char)(arr[num] + '0');
    }
    else
    {
      break;
    }
  }

  cout << a << endl;
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
