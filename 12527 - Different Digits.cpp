#include<bits/stdc++.h>
#include<string.h>
#define pi 2*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int func(int i)
{
    string x;
    int l;
    ostringstream convert;
    convert<<i;
    x=convert.str();
    l=x.length();
    for(int j=0;j<x.length();j++)
    {
        for(int k=0;k<l;k++)
            {
                if(j!=k && x[j]==x[k])
                    return 1;
            }
    }
    return 2;
}
int main()
{
    int N,M,sum,i;
    while(cin>>N>>M)
    {
        sum=0;
        for(i=N;i<=M;i++)
        {
            if(func(i)==2)
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
