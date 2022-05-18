#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,Y,count=0;
        cin>>X>>Y;
        if(X>=Y)
        cout<<"0"<<endl;
        else
        {
            while(X<Y)
            {
                X=X+8;
                count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
