#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x;
        cin>>x;
        cout<<"Table of "<<x<<endl;
        for(int i=1;i<=10;i++)
        {
            cout<<x<<" x "<<i<<" = "<<x*i<<endl;
        }
        cout<<"\n";
    }
    return 0;
}
