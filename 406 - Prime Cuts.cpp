#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int n,c,i,j,primes[2000],numbers[2000],limit,start;
    while(cin>>n>>c)
        {
            for(i=0;i<=n;i++)
                primes[i]=1;
            primes[0]=0;
            for(i=2;i<=n;i++)
                {
                    if(primes[i]==1)
                        {
                            for(j=2;i*j<=n;j++)
                                {
                                    primes[i*j]=0;
                                }
                        }
                }
            j=0;
            for(i=0;i<=n;i++)
                {
                    if(primes[i]==1)
                        {
                            numbers[j]=i;
                            j++;
                        }
                }
          /*cout<<"Showing Numbers : siz of "<<j<<endl;
            for(i=0;i<j;i++)
                cout<<i<<" = "<<numbers[i]<<endl;
                cout<<endl; */
            if(j%2==0 && (2*c)<j)
                {
                    cout<<n<<" "<<c<<":";
                    start=((j)-(2*c))/2;
                    limit=(c*2)+((j)-(2*c))/2-1;
                    for(i=start;i<=limit;i++)
                        {
                            cout<<" "<<numbers[i];
                        }
                }
            else if(j%2!=0 && ((2*c)-1)<j)
                {
                    cout<<n<<" "<<c<<":";
                    start=(j/2)+1-((2*c)/2);
                    limit=start+(2*c)-2;
                    for(i=start;i<=limit;i++)
                        {
                            cout<<" "<<numbers[i];
                        }
                }
            else
                {
                    cout<<n<<" "<<c<<":";
                    for(i=0;i<j;i++)
                        {
                            cout<<" "<<numbers[i];
                        }
                }
            cout<<endl<<endl;
        }
    return 0;
}
