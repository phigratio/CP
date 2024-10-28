#include <bits/stdc++.h>
#include <iomanip> // Include the necessary header for setw() and setfill()
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

void muqtu()
{
  string s;
  cin >> s;
  ll first = stoi(s.substr(0, 2));
  ll second = stoi(s.substr(3, 2));
  double am = (first * 1.0) / 12;

  if (am > 1)
  {
    first = first - 12;
    cout << setw(2) << setfill('0') << first << ":" << setw(2) << setfill('0') << second << " PM"
         << endl;
  }
  else if (am == 1)
  {
    cout << "12:" << setw(2) << setfill('0') << second << " PM" << endl;
  }
  else
  {
    if (first == 0)
    {
      first = 12;
    }
    cout << setw(2) << setfill('0') << first << ":" << setw(2) << setfill('0') << second << " AM" << endl;
  }
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
