#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

ll GCD(ll i,ll j)
{
    ll divisor=min(i,j);
    ll divident=max(i,j);
    ll rem;
    while(divisor!=0)
        {
            rem=divident%divisor;
            divident=divisor;
            divisor=rem;
        }
    return divident;
}

int main()
{
    ll i,j,N,G;
    while(cin>>N)
        {
            if(N==0)
                return 0;
            G=0;
            for(i=1;i<N;i++)
                for(j=i+1;j<=N;j++)
                    {
                        G+=GCD(i,j);
                    }
            cout<<G<<endl;
        }
    return 0;
}
