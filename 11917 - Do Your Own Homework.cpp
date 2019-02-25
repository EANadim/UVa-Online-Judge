#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int i,j,T,D,N,a,x,flag=0;
    string s,p;
    map<string,int>M;
    cin>>T;
    for(i=1;i<=T;i++)
        {
            flag=0;
            M.clear();
            cin>>N;
            for(j=0;j<N;j++)
                {
                    cin>>s>>a;
                    M[s]=a;
                }
            cin>>D;
            cin>>p;
            map<string,int>::iterator it;
            for(it=M.begin();it!=M.end();it++)
                {
                    if(it->first==p)
                        {
                            x=it->second;
                            flag=1;
                            break;
                        }
                }
            if(flag==0)
                {
                    cout<<"Case "<<i<<": "<<"Do your own homework!"<<endl;
                }
            else if(flag==1)
                {
                    if(x<=D)
                        {
                            cout<<"Case "<<i<<": "<<"Yesss"<<endl;
                        }
                    else if(x>D && x<=(D+5))
                        {
                            cout<<"Case "<<i<<": "<<"Late"<<endl;
                        }
                    else if(x>(D+5))
                        {
                            cout<<"Case "<<i<<": "<<"Do your own homework!"<<endl;
                        }
                }
        }
    return 0;
}
