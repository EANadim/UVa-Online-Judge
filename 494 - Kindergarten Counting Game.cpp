#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    char s[MAX],p[MAX];
    int i,j,counter;
    getchar();
    while(fgets(s,MAX,stdin))
        {
            counter=0;
            j=0;
            memset(p,0,sizeof(p));
            for(i=0;i<strlen(s);i++)
                {
                    if(tolower(s[i])>=97 && tolower(s[i])<=122)
                        {
                            p[j]=s[i];
                            j++;
                        }
                    else
                        {
                            p[j]=' ';
                            j++;
                        }
                }
             p[j]=' ';
             j++;
             for(i=0;i<j;i++)
                {
                    if(tolower(p[i])>=97 && tolower(p[i])<=122 && p[i+1]==' ')
                        counter++;
                }
             cout<<counter<<endl;
        }
    return 0;
}
