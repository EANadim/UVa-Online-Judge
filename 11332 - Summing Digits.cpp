#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int getResults(int n)
{
    int digit,res=0;
    while(n!=0)
        {
            digit=n%10;
            res=res+digit;
            n=n/10;
        }
    return res;
}
int main()
{
    int digit,res=0;
    while(cin>>digit)
        {
            if(digit==0)
                {
                    return 0;
                }
            else
                {
                    while(digit>=10)
                        {
                            res=getResults(digit);
                            digit=res;
                        }
                    cout<<digit<<endl;
                }
        }
}
