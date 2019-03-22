#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int a,b,x,y,z;
    while((cin>>a>>b))
        {
            if(a==-1 && b==-1)
                {
                    return 0;
                }
            else if(a==b && (a!=-1 && b!=-1))
                {
                    x=0;
                    y=0;
                }
            else if(a>b)
                {
                    x=a-b;
                    y=b+100-a;
                }
            else if(a<b)
                {
                    x=b-a;
                    y=a+100-b;
                }

            z=min(x,y);
            cout<<z<<endl;
        }
    return 0;
}
