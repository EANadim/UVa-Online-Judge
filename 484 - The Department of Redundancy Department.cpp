#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    vector<int>v;
    map<int,int>m;
    int x,i=0,y,z;
    m.clear();
    v.clear();
    while(cin>>x)
        {
            if(count(v.begin(),v.end(),x)==0)
                {
                    m[i]=x;
                    i++;
                }
            v.push_back(x);
        }
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        {
            y=it->second;
            z=count(v.begin(),v.end(),y);
            cout<<y<<" "<<z<<endl;
        }
    return 0;
}
