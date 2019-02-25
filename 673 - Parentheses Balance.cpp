#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    char s[200];
    stack<char>x;
    int i,j,T,flag;
    cin>>T;
    getchar();

    for(j=0;j<T;j++)
        {
            memset(s,0,sizeof(s));
            fgets(s,200,stdin);
            flag=0;
            while(!x.empty())
                x.pop();
            for(i=0;i<strlen(s);i++)
            {
                if(s[i]=='(' || s[i]=='[')
                {
                    x.push(s[i]);
                }
                else if(s[i]==')')
                {
                    if(x.empty())
                        {
                            flag=1;
                            break;
                        }
                    if(x.top()=='(')
                        {
                            x.pop();
                        }
                }
                else if(s[i]==']')
                {
                    if(x.empty())
                        {
                            flag=1;
                            break;
                        }
                    if(x.top()=='[')
                        {
                            x.pop();
                        }
                }
            }
            if(x.empty() && flag==0)
                cout<<"Yes"<<endl;
            else if(!x.empty() || flag==1)
                cout<<"No"<<endl;
         }
    return 0;
}
