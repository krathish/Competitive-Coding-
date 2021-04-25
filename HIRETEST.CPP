#include <iostream>
using namespace std;

int main() {
    int t,n,m,x,y;
    char c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m>>x>>y;
        for(int j=1;j<=n;j++)
        {
            int f=0,p=0;
            for(int k=1;k<=m;k++)
            {
                cin>>c;
                if(c=='F')
                f++;
                else if(c=='P')
                p++;
                else;
            }

                if((f>=x )|| (f>=x-1 && p>=y))
                cout<<"1";
                else
                cout<<"0";
             f=0,p=0;
        }
        cout<<endl;
    }
    return 0;
}