#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll sum=0,k,T;
    char x[MAX];
    cin>>T;
    while(T--)
        {
            cin>>x;
            if(x[0]=='d')
                {
                    cin>>k;
                    sum=sum+k;
                }
            if(x[0]=='r')
                {
                    cout<<sum<<endl;
                }
        }
    return 0;
}
