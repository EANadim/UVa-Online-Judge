#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll sum=0,T,j,i;
    char s[MAX];
    cin>>T;
    i=1;
    getchar();
    loop:

    fgets(s,100,stdin);
    for(j=0;j<strlen(s);j++)
        {
            if(s[j]==' ')
                sum=sum+1;
            else if(s[j]>=115)
                {
                    if(s[j]==115 || s[j]==122)
                        sum=sum+4;
                    else if(s[j]==116 || s[j]==119)
                        sum=sum+1;
                    else if(s[j]==117 || s[j]==120)
                        sum=sum+2;
                    else if(s[j]==118 || s[j]==121)
                        sum=sum+3;
                }
            else
                {
                    s[j]=s[j]-96;
                    if(s[j]%3==0)
                        sum=sum+3;
                    else if(s[j]%3==2)
                        sum=sum+2;
                    else if(s[j]%3==1)
                        sum=sum+1;
                }

        }
    cout<<"Case #"<<i<<": "<<sum<<endl;
    sum=0;
    if(i==T)
        return 0;
    else if(i<T)
        {
            i++;
            goto loop;
        }

    return 0;
}
