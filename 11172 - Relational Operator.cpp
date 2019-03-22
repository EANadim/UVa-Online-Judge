#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll t,a,b;
    cin>>t;
    while(t--)
        {
            cin>>a>>b;
            if(a>b)
                cout<<">"<<endl;
            else if(a<b)
                cout<<"<"<<endl;
            else if(a==b)
                cout<<"="<<endl;
        }
    return 0;
}
