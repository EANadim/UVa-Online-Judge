#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int N,Q,i;
    string s,a,x;
    map<string,string>M;
    cin>>N;
    cin.ignore();
    for(i=0;i<N;i++)
        {
            getline(cin,s);
            getline(cin,a);
            M[s]=a;
        }
    cin>>Q;
    cin.ignore();
    map<string,string>::iterator it;
    for(i=0;i<Q;i++)
        {
            getline(cin,x);
            for(it=M.begin();it!=M.end();it++)
                {
                    if(it->first==x)
                        {
                            cout<<it->second<<endl;
                            break;
                        }
                }
        }
    return 0;
}
