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
ll cas = 0;
void muqtu()
{
  cas++;
  ll n;

  cin >> n;
  ll temp = n;
  if (n % 2)
  {
    cout << "Case " << cas << ":"
         << " Impossible" << endl;
  }
  else
  {
    while (n % 2 == 0)
    {
      n = n / 2;
    }
    cout << "Case " << cas << ":" << n << " " << temp / n << endl;
  }
}
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }
  return 0;
}