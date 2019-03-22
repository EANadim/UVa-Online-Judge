#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i;
    string s;
    while(getline(cin,s))
        {
            for(i=0;i<s.length();i++)
                {
                    printf("%c",s[i]-7);
                }
            cout<<endl;
        }
    return 0;
}
