#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll a,b,i,j=1,T,sum=0;
    cin>>T;
    while(T--)
        {
            cin>>a;
            cin>>b;
            if(a>b)
                swap(a,b);

            for(i=a;i<=b;i++)
                {
                    if(i%2!=0)
                        sum=sum+i;
                }

            cout<<"Case "<<j<<": "<<sum<<endl;
            j++;
            sum=0;
        }

    return 0;
}
