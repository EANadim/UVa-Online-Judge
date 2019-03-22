#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int m[1000002];
int primes[1000002];
void count_primes()
{
    int j,div,rem,dig,freq=0;
    for(j=0;j<=1000000;j++)
        {
            dig=0;
            if(m[j]==1)
                {
                    div=j;
                    while(div!=0)
                        {
                            rem=div%10;
                            div=div/10;
                            dig=dig+rem;
                        }
                    if(m[dig]==1)
                        {
                            freq++;
                        }
                }
            primes[j]=freq;
        }
}
int main()
{
    memset(m,0,sizeof(m));
    memset(primes,0,sizeof(primes));
    int i,j,n,t1,t2;
    scanf("%d",&n);
    m[0]=0;
    m[1]=0;
    for(i=2;i<=1000000;i++)
        {
            m[i]=1;
        }
    for(i=4;i<=1000000;i=i+2)
        {
            m[i]=0;
        }
    for(i=3;i<=1000000;i=i+2)
        {
            if(m[i]==1)
                {
                    for(j=3;i*j<=1000000;j=j+2)
                        {
                            m[i*j]=0;
                        }
                }
        }
    count_primes();

    for(i=0;i<n;i++)
        {
            scanf("%d%d",&t1,&t2);
            if(t1==0)
                {
                    printf("%d\n",primes[t2]);
                    continue;
                }
            else if(primes[t1-1]==primes[t1])
                {
                    printf("%d\n",primes[t2]-primes[t1]);
                    continue;
                }
            else
                {
                    printf("%d\n",primes[t2]-primes[t1]+1);
                    continue;
                }
        }
    return 0;
}
