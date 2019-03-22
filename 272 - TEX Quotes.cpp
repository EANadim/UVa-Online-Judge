#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll l,flag=1,i;
    char s[MAX];
    //getchar();
    while(scanf("%c",&s)!=EOF)
        {
            l=strlen(s);
            for(i=0;i<l;i++)
                {
                    if(s[i]=='"')
                        {
                            if(flag%2!=0)
                                {
                                    cout<<"``";
                                }
                            else if(flag%2==0)
                                {
                                    cout<<"''";
                                }
                            flag++;
                        }
                    else
                        {
                            cout<<s[i];
                        }
                }
            //cout<<endl;
        }
    return 0;
}
