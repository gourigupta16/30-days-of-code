#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;;
        cin>>N;
        int nums[N];
        for(int i=0;i<N;i++)
        {
            cin>>nums[i];
        }
        
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;)
            {
                if(nums[i]==nums[j])
                {
                    for(int k=j;k<N;k++)
                    nums[k]=nums[k+1];
                    N--;
                }
                else
                j++;
            }
        }
        
        for(int i=0;i<N;i++)
        {
            cout<<nums[i]<<" ";
        }
        
        cout<<"\n";
    }
    return 0;
}
