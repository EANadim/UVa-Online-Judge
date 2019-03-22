#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;

int bigmod(int B,int P,int M)
{
    if(P==0)
        return 1%M;
    ll x=bigmod(B,P/2,M);
    x=(x*x)%M;
    if(P%2==1)
        x=(x*B)%M;
    return x;
}
int main()
{
    ll B,P,M,i;
    while(cin>>B>>P>>M)
        {
            cout<<bigmod(B,P,M);
            cout<<endl;
        }
    return 0;
}
