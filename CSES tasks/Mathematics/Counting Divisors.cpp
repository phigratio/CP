#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll maxi = 1e7 + 1;

void muqtu()
{
  faster;
  ll n;
  vector<ll> arr(maxi, 0);
  for (int i = 1; i < maxi; i++)
  {
    for (int j = i; j < maxi; j += i)
    {
      arr[j]++;
    }
  }
  vector<ll> hesh(maxi, 0);
  for (int i = 1; i < maxi; i++)
  {
    hesh[i] = hesh[i - 1] + arr[i] * i;
  }
  cin >> n;
  cout << hesh[n] << endl;
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
