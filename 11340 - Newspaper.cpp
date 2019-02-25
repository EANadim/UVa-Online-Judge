#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    map<char,double>V;
    char s,dat[MAX];
    ll i,j,p,l,K,M,N;
    double dollar,a,sum=0.0,c;
    cin>>N;
    for(p=0;p<N;p++)
        {
            sum=0;
            V.clear();
            cin>>K;
            for(i=0;i<K;i++)
                {
                    cin>>s>>a;
                    V[s]=a;
                }
            cin>>M;
            cin.ignore();
            for(i=0;i<M;i++)
                {
                    fgets(dat,MAX,stdin);
                    l=strlen(dat);
                    map<char,double>::iterator it;
                    for(it=V.begin();it!=V.end();it++)
                        {
                            c=count(dat,dat+l,it->first);
                            sum=sum+c*it->second;
                        }
                }
            dollar=sum/100.0;
            printf("%.2lf$\n",dollar);
        }
    return 0;
}
