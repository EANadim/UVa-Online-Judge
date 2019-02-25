#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int prime[1000000];
int main()
{
    int i,j,n,first,second;
    prime[0]=0;
    prime[1]=0;
    for(i=2;i<=1000000;i++)
        {
            prime[i]=1;
        }
    for(i=2;i<=1000000;i++)
        {
            if(prime[i]==1)
                {
                    for(j=2;i*j<=1000000;j++)
                        {
                            prime[i*j]=0;
                        }
                }
        }
    while(cin>>n)
        {
            first=-1;
            second=-1;
            if(n==0)
                return 0;
            for(i=2;i<=(n/2);i++)
                {
                    if(prime[i]==1 && prime[n-i]==1)
                        {
                            first=i;
                            second=n-i;
                            break;
                        }
                }
            if(first!=-1 && second!=-1)
                {
                    cout<<n<<" = "<<first<<" + "<<second<<endl;
                }
            else
                {
                    cout<<"Goldbach's conjecture is wrong."<<endl;
                }
        }
    return 0;
}
