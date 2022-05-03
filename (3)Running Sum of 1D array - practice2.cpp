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
        int nums[n];
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<=i;j++)
            {
                sum=sum+nums[j];
            }
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
