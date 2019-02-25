#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    char x[47] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 91, 93, 92,
                     'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 59, 39,
                     'Z', 'X', 'C', 'V', 'B', 'N', 'M', 44, 46, 47,
                     '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61} ;
    string s;
    int i,j;
    while(getline(cin,s))
        {
            for(i=0;i<s.size();i++)
                {
                    for(j=0;j<47;j++)
                        {
                            if(s[i]==x[j])
                                {
                                    s[i]=x[j-1];
                                }
                        }
                }
            cout<<s<<endl;
        }
    return 0;
}
