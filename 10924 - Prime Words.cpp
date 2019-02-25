#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int prime[2000];
int main()
{
    int i,j,sum;
    char s[MAX];
    prime[0]=0;
    prime[1]=1;
    for(i=2;i<=2000;i++)
        {
            prime[i]=1;
        }
    for(i=2;i<=2000;i++)
        {
            if(prime[i]==1)
                {
                    for(j=2;i*j<=2000;j++)
                        {
                            prime[i*j]=0;
                        }
                }
        }
    while(cin>>s)
        {
            sum=0;
            for(i=0;i<strlen(s);i++)
                {
                    if(s[i]>=97)
                        {
                            sum=sum+(s[i]-97)+1;
                        }
                    else if(s[i]<97)
                        {
                            sum=sum+(s[i]-65)+27;
                        }
                }
            //cout<<sum<<endl;
            if(prime[sum]==1)
                cout<<"It is a prime word."<<endl;
            else
                cout<<"It is not a prime word."<<endl;
        }
    return 0;
}
