#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            a[i]=pow(a[i],2);
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
