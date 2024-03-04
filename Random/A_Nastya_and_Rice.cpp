#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
void muqtu()
{
    ll a,b,c,d,n;
    cin>>n>>a>>b>>c>>d;
    int posLeft=c-d;
    int posRight=c+d;

    if(((a-b)*n)>posRight or ((a+b)*n)<posLeft)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        muqtu();
    }

}