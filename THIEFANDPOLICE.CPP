#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,m,x,y,a,b;
        cin>>n>>m>>x>>y>>a>>b;
        if((((n-x)+(m-y))-1)<(std::max((n-a),(m-b))))
        cout<<"YES\n";
        
        else cout<<"NO\n";
        t--;
    }

}