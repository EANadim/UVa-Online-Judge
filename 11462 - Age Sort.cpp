#include<bits/stdc++.h>
#define MAX 100000
typedef long long ll;
using namespace std;
int main()
{
    vector<ll>v;
    ll i,n,x;

    while(cin>>n)
        {
            v.clear();
            if(n==0)
                return 0;
            for(i=0;i<n;i++)
                {
                    cin>>x;
                    v.push_back(x);
                }
            sort(v.begin(),v.end());
            for(i=0;i<n;i++)
                {
                    cout<<v[i];
                    if(i!=(n-1))
                        cout<<" ";
                }
            cout<<endl;
        }
	return 0;
}
