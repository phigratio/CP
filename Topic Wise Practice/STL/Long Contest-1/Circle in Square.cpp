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
ll cas = 0;
void muqtu()
{
  cas++;
  double x;
  cin >> x;
  double pi = 2 * acos(0.0);
  double l = x * 2;
  double ans = (pow(l, 2) - (pi * pow(x, 2)));
  cout << "Case " << cas << ": " << fixed << setprecision(2) << ans << endl;
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
