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
  int n;
  cin >> n;
  int half = n / 2;
  int real = INT_MIN;
  int highG = INT_MIN;
  for (int i = n - 1; i >= 1; i--)
  {
    int ans = __gcd(i, n);
    int temp = ans + i;
    if (temp >= real)
    {
      real = temp;
      highG = i;
    }
  }

  cout << highG << endl;
}
int main()
{
  faster;
  ll t;
  cin >> t; // t=1;
  while (t--)
  {
    muqtu();
  }
  return 0;
}