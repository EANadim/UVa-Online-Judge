#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    string x,y;
    int sum1,sum2,rem1,rem2,i;
    float a,b,c;
    //getchar();
    while(getline(cin,x))
        {
            getline(cin,y);
            sum1=0;
            sum2=0;
            a=0.0;
            b=0.0;
            rem1=1;
            rem2=1;
            for(i=0;i<x.size();i++)
                {
                    if((x[i]>=65 && x[i]<=90) || (x[i]>=97 && x[i]<=122))
                        {
                            sum1=sum1+tolower(x[i])-96;
                        }
                }
            for(i=0;i<y.size();i++)
                {
                    if((y[i]>=65 && y[i]<=90) || (y[i]>=97 && y[i]<=122))
                        {
                            sum2=sum2+tolower(y[i])-96;
                        }
                }
             while(sum1!=0)
                {
                    rem1=sum1%10;
                    sum1=sum1/10;
                    a=a+rem1;
                    if(sum1==0 && a>9)
                        {
                            sum1=a;
                            a=0;
                        }
                }
             while(sum2!=0)
                {
                    rem2=sum2%10;
                    sum2=sum2/10;
                    b=b+rem2;
                    if(sum2==0 && b>9)
                        {
                            sum2=b;
                            b=0;
                        }
                }
             if(b<=a)
                c=(b/a)*100.00;
             else
                c=(a/b)*100.00;
             printf("%.2f %%\n",c);
        }
    return 0;
}
