#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define ll long long

void muqtu()
{
  string s1, s2;
  cin >> s1 >> s2;

  int hr1 = stoi(s1.substr(0, 2));
  int min1 = stoi(s1.substr(3, 2));
  int hr2 = stoi(s2.substr(0, 2));
  int min2 = stoi(s2.substr(3, 2));

  int totalMin1 = hr1 * 60 + min1;
  int totalMin2 = hr2 * 60 + min2;

  if (totalMin2 < totalMin1)
  {
    totalMin2 += 24 * 60;
  }

  int midTotalMin = (totalMin1 + totalMin2) / 2;

  midTotalMin %= (24 * 60);

  int ansHr = midTotalMin / 60;
  int ansMin = midTotalMin % 60;

  cout << setfill('0') << setw(2) << ansHr << ":"
       << setfill('0') << setw(2) << ansMin << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll t;
  t = 1;
  while (t--)
  {
    muqtu();
  }

  return 0;
}