#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    ll x,a[MAX],i=0,m;
    while(cin>>x)
        {
            a[i]=0;
            a[i]=x;
            sort(a,a+i+1);
            if(i%2==0)
                {
                    m=a[i/2];
                    cout<<m<<endl;
                }
            else if(i%2!=0)
                {
                    m=a[i/2]+a[i/2+1];
                    m=m/2;
                    cout<<m<<endl;
                }
            i++;
        }
    return 0;
}
