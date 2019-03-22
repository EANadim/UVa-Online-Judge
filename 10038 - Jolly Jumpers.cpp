#include<bits/stdc++.h>
#include<string.h>
#define pi 2*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int n,i,x,flag,a[MAX];
    set<int>s;
    while(cin>>n)
        {
            flag=0;
            s.clear();
            if(n==0)
                flag=1;
            for(i=0;i<n;i++)
                {
                    cin>>a[i];
                }
            for(i=1;i<n;i++)
                {
                    x=abs(a[i]-a[i-1]);
                    s.insert(x);
                }
            if(s.size()!=(n-1))
                flag=1;
            i=1;
            set<int>::iterator it;
            for(it=s.begin();it!=s.end();it++)
                {
                    //cout<<i<<" "<<*it<<endl;
                    if(*it!=i)
                        {
                            flag=1;
                            break;
                        }
                    i++;
                }
            //cout<<"FLAG = "<<flag<<endl;
            if(flag==0)
                {
                    cout<<"Jolly"<<endl;
                }
            else if(flag==1)
                {
                    cout<<"Not jolly"<<endl;
                }
        }
    return 0;
}
