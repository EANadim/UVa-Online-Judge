#include <iostream>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i=1;
    char x[MAX];
    while(cin>>x)
        {
            if(x[0]=='*')
                return 0;
            else if(x[0]=='H')
                cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
            else if(x[0]=='U')
                cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
            i++;
        }
    return 0;
}
