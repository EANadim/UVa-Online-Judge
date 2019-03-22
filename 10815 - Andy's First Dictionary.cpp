#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int i,j;
    char s[MAX],p[MAX];
    set<string>ss;

    while(fgets(s,MAX,stdin))
        {
            j=0;
            memset(p,0,sizeof(p));

            for(i=0;i<strlen(s);i++)
                {
                    if(tolower(s[i])>=97 && tolower(s[i])<=122)
                        {
                            p[j]=tolower(s[i]);
                            j++;
                        }
                    else
                        {
                            p[j]='\0';
                            j=0;
                            if(p[0]=='\0')
                                {
                                    j=0;
                                    continue;
                                }
                            ss.insert(p);
                        }
                }
        }
        set<string>::iterator it;
        for(it=ss.begin();it!=ss.end();it++)
            {
                cout<<*it<<endl;
            }
    return 0;
}
