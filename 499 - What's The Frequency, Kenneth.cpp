#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i,j,freq[MAX],maxi;
    char s[MAX],letter[MAX];
    getchar();
    while(fgets(s,MAX,stdin))
        {
            for(i=0;i<52;i++)
                {
                    freq[i]=0;
                    letter[i]=0;
                }
            for(i=0;i<26;i++)
                {
                    letter[i]=i+65;
                }
            for(i=26;i<52;i++)
                {
                    letter[i]=i+71;
                }
            for(j=0;j<strlen(s);j++)
                {
                    for(i=0;i<52;i++)
                        {
                            if(s[j]==letter[i])
                                {
                                    freq[i]=freq[i]+1;
                                }
                        }
                }
            maxi=0;
            for(i=0;i<52;i++)
                {
                    if(freq[i]>maxi)
                        maxi=freq[i];
                }
            for(i=0;i<52;i++)
                {
                    if(maxi==freq[i])
                        cout<<letter[i];
                }
            cout<<" "<<maxi;
            cout<<endl;
        }
    return 0;
}
