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
  ll n, k, Pb, Ps;
  cin >> n >> k >> Pb >> Ps;

  vector<ll> p(n), a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  vector<ll> cycleBod, cycleSash;
  vector<ll> vis(n, 0);
  vis[Pb - 1] = 1;
  while (true)
  {
    cycleBod.pb(a[Pb - 1]);
    Pb = p[Pb - 1];
    if (vis[Pb - 1] == 1)
      break;
    else
    {
      vis[Pb - 1] = 1;
    }
  }
  vis = vector<ll>(n, 0);
  vis[Ps - 1] = 1;
  while (true)
  {
    cycleSash.pb(a[Ps - 1]);
    Ps = p[Ps - 1];
    if (vis[Ps - 1] == 1)
      break;
    else
    {
      vis[Ps - 1] = 1;
    }
  }

  ll bod = 0, sash = 0;
  ll preSum = 0;

  for (int i = 0; i < cycleBod.size(); i++)
  {
    if (k < i + 1)
    {
      break;
    }

    ll curr = preSum + (cycleBod[i] * (k - i));
    bod = max(bod, curr);
    preSum += cycleBod[i];
  }
  preSum = 0;
  for (int i = 0; i < cycleSash.size(); i++)
  {
    if (k < i + 1)
    {
      break;
    }

    ll curr = preSum + (cycleSash[i] * (k - i));
    sash = max(sash, curr);
    preSum += cycleSash[i];
  }

  if (bod > sash)
  {
    cout << "Bodya" << endl;
  }
  else if (bod < sash)
  {
    cout << "Sasha" << endl;
  }
  else
  {
    cout << "Draw" << endl;
  }

  return;
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