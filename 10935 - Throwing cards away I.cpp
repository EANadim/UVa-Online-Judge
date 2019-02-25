#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int n,i,j,d[MAX],x,y;
    vector<int>v,w;
    while(cin>>n)
        {
            if(n==0)
                return 0;
            if(n==1)
            {
                cout<<"Discarded cards:"<<endl;
                cout<<"Remaining card: "<<1<<endl;
                continue;
            }
            v.clear();
            w.clear();
            for(i=0;i<n;i++)
                {
                    x=i+1;
                    v.push_back(x);
                }
            while(v.size()!=1)
               {
                    y=v[0];
                    w.push_back(y);
                    v.erase(v.begin());
                    v.push_back(v[0]);
                    v.erase(v.begin());
                }
            cout<<"Discarded cards: "<<w[0];
            for(i=1;i<w.size();i++)
                {
                    cout<<", "<<w[i];
                }
            cout<<endl;
            cout<<"Remaining card: "<<v[0]<<endl;
        }
    return 0;
}
