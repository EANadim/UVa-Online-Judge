#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int i,x,y,N,sum,s;
    vector<int>v;
    while(cin>>N)
        {
            sum=0;
            if(N==0)
                return 0;
            v.clear();
            for(i=0;i<N;i++)
                {
                    cin>>x;
                    v.push_back(x);
                }
            sort(v.begin(),v.end());
            while(v.size()>1)
               {
                    y=0;
                    y=v[0]+v[1];
                    v.erase(v.begin()+0);
                    v.erase(v.begin()+0);
                    v.push_back(y);
                    sort(v.begin(),v.end());
                    sum=sum+y;
                }
            cout<<sum<<endl;
        }
    return 0;
}
