#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    string s;
    int x,i,j;
    while(getline(cin,s))
        {
            x=-1;
            for(i=0;i<s.size();i++)
            {
                if(s[i]==' ')
                    {
                        for(j=i-1;j>x;j--)
                            {
                                cout<<s[j];
                            }
                        cout<<" ";
                        x=i;
                    }
            }
            for(j=s.size()-1;j>x;j--)
                {
                    cout<<s[j];
                }
            cout<<endl;
        }
    return 0;
}
