#include <iostream>
using namespace std;

int main() {
	int T,x,y,xr,yr,D;
    cin>>T;
    while(T>0)
    {
        cin>>x>>y>>xr>>yr>>D;
        int a=std::min(x/xr, y/yr);
        if(D<=a)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        T--;
    }
	return 0;
}
