#include<bits/stdc++.h>
#include<string.h>
#define pi 2*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    ll i,N,M,x,sum;
    set<ll>s;
    while(cin>>N>>M)
    {
        sum=0;
        s.clear();
        if(N==0 && M==0)
            return 0;
        for(i=0;i<N;i++)
        {
            cin>>x;
            s.insert(x);
        }
        for(i=0;i<M;i++)
        {
            cin>>x;
            if(s.find(x)!=s.end())
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
