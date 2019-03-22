#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll l,t,f1=0,f2=0,f3=0;
    char x[MAX];
    cin>>t;
    while(t--)
        {
            cin>>x;
            l=strlen(x);
            if(l==3)
                {
                    if(x[0]=='o')
                        f1++;
                    if(x[1]=='n')
                        f1++;
                    if(x[2]=='e')
                        f1++;
                    if(x[0]=='t')
                        f2++;
                    if(x[1]=='w')
                        f2++;
                    if(x[2]=='o')
                        f2++;
                }
            else if(l==5)
                {
                    if(x[0]=='t')
                        f3++;
                    if(x[1]=='h')
                        f3++;
                    if(x[2]=='r')
                        f3++;
                    if(x[3]=='e')
                        f3++;
                    if(x[4]=='e')
                        f3++;
                }
            if(f1>=2)
                cout<<1<<endl;
            else if(f2>=2)
                cout<<2<<endl;
            else if(f3>=4)
                cout<<3<<endl;
            f1=0;
            f2=0;
            f3=0;
        }
    return 0;
}
