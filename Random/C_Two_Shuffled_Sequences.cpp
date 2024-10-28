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

  vector<ll> incr, decr;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr.rbegin(), arr.rend());
  bool flag = true;
  bool yellow = false;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == arr[i + 1] && i + 1 < n)
    {
      if (arr[i + 1] == arr[i + 2] && (i + 2 < n))
      {
        flag = false;
        break;
      }
      else
      {
        incr.pb(arr[i]);
        decr.pb(arr[i + 1]);
        i++;
      }
    }
    else
    {
      incr.pb(arr[i]);
    }
  }
  reverse(incr.begin(), incr.end());

  if (flag)
  {
    cout << "YES" << endl;
    cout << incr.size() << endl;
    for (auto x : incr)
    {
      cout << x << " ";
    }
    cout << endl;
    cout << decr.size() << endl;
    for (auto x : decr)
    {
      cout << x << " ";
    }
  }
  else
  {
    cout<<"NO"<<endl;
  }
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