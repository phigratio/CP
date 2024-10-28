#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void muqtu()
{
  ll n, f, k;
  cin >> n >> f >> k;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll fav = arr[f - 1];

  sort(arr.rbegin(), arr.rend());

  if (arr[k - 1] > fav)
  {
    cout << "NO" << endl;
  }
  else if (arr[k - 1] < fav)
  {
    cout << "YES" << endl;
  }
  else
  {
    
    bool maybe = false;
    for (int i = k; i < n; i++)
    {
      if (arr[i] == fav)
      {
        maybe = true;
        break;
      }
    }
    if (maybe)
    {
      cout << "MAYBE" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
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
