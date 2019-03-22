#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    float c1,c2,d;
    int T,i;
    cin>>T;
    for(i=1;i<=T;i++)
        {
            cin>>c1>>d;
            c2=((5.0*d)/9)+c1;
            cout<<"Case "<<i<<": ";
            printf("%.2f",c2);
            cout<<endl;
        }
    return 0;
}
