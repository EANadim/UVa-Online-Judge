#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    map<string,string>M;
    string a,b,c;
    char s[MAX];
    while(gets(s))
        {
            if(s[0]=='\0')
                break;
            stringstream ss(s);
            ss>>c;
            ss>>a;
            M[a]=c;
        }
    for(int i=0;i<100000;i++)
        {
            cin>>b;
            if(M.count(b)==1)
                {
                    cout<<M[b]<<endl;
                }
            else
                {
                    cout<<"eh"<<endl;
                }
        }
    return 0;
}
