#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int m[2002];
int main()
{
    memset(m,0,sizeof(m));
    int number[10],capital[30],small[30],i,j,t;
    char x[MAX];
    m[0]=0;
    m[1]=0;
    for(i=2;i<=2002;i++)
        {
            m[i]=1;
        }
    for(i=2;i<=2002;i++)
        {
            if(m[i]==1)
                {
                    for(j=2;i*j<=2002;j++)
                        {
                            m[i*j]=0;
                        }
                }
        }
    memset(number,0,sizeof(number));
    memset(capital,0,sizeof(capital));
    memset(small,0,sizeof(small));
    int Case=1,flag;
    cin>>t;
    while(t--)
        {
            memset(number,0,sizeof(number));
            memset(capital,0,sizeof(capital));
            memset(small,0,sizeof(small));
            cin>>x;
            flag=0;
            cout<<"Case "<<Case++<<": ";
            for(i=0;i<strlen(x);i++)
                {
                   if(x[i]>=48 && x[i]<=57)
                    {
                        number[x[i]-48]++;
                    }
                   else if(x[i]>=65 && x[i]<=90)
                    {
                        capital[x[i]-65]++;
                    }
                   else if(x[i]>=97 && x[i]<=122)
                    {
                        small[x[i]-97]++;
                    }
                }
            for(i=0;i<10;i++)
                {
                    if(m[number[i]]==1)
                        {
                            flag=1;
                            printf("%c",i+48);
                        }
                }
            for(i=0;i<27;i++)
                {
                    if(m[capital[i]]==1)
                        {
                            flag=1;
                            printf("%c",i+65);
                        }
                }
            for(i=0;i<27;i++)
                {
                    if(m[small[i]]==1)
                        {
                            flag=1;
                            printf("%c",i+97);
                        }
                }
            if(flag==0)
                cout<<"empty";
            cout<<endl;
        }
    return 0;
}
