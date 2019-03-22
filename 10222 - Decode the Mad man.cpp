#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i,j,l;
    string s;
    char x[47] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 91, 93, 92,
                     'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 59, 39,
                     'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47,
                     '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61} ;
    while(getline(cin,s))
        {
            l=s.length();
            for(i=0;i<l;i++)
                {
                    if(s[i]!=' ' && s[i]!='\n')
                        {
                            for(j=0;j<47;j++)
                                {
                                    if(x[j]==tolower(s[i]))
                                        {
                                            s[i]=x[j-2];
                                            break;
                                        }
                                }
                        }
                }
            cout<<s<<endl;
        }
    return 0;
}
