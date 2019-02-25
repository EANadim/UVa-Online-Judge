#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    char s[MAX],letter[MAX];
    ll t,i,maxi,l,j,freq[MAX];
    cin>>t;
    getchar();
    while(t--)
        {
            fgets(s,MAX,stdin);
            l=strlen(s);
            for(i=0;i<26;i++)
                {
                    freq[i]=0;
                    letter[i]=97+i;
                }
            for(i=0;i<l;i++)
                {
                    s[i]=tolower(s[i]);
                    for(j=0;j<26;j++)
                        {
                            if(letter[j]==s[i])
                                freq[j]++;
                        }
                }
            maxi=-1;
            for(i=0;i<26;i++)
                {
                    if(freq[i]>maxi)
                        maxi=freq[i];
                }
            for(i=0;i<26;i++)
                {
                    if(maxi==freq[i])
                        {
                            cout<<letter[i];
                        }
                }
            cout<<endl;

        }
    return 0;
}
