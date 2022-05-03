#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int num[n],ans[2*n];
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        
        for(int i=0;i<n;i++)
        {
            ans[i]=num[i];
            ans[(2*n)-(n-i)]=num[i];
        }
        
        for(int i=0;i<2*n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
