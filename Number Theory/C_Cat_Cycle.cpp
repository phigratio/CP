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
  ll n, k;
  cin >> n >> k;
  if (n % 2 == 0)
  {
    cout << 1 + ((k - 1) % n) << endl;
  }
  else
  {
    ll insect = (k - 1) / ((n - 1) / 2);
    cout << 1 + ((k + insect - 1) % n) << endl;
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