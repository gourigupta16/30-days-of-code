#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,a=0;
        cin>>N;
        int nums[N];
        for(int i=0;i<N;i++)
        {
            cin>>nums[i];
        }
        
        for(int i=0;i<N;i++)
        {
            if(nums[i]!=0)
            {
                nums[a]=nums[i];
                a++;
        }
    }

    for(int i=a;i<N;i++)
        nums[i]=0;
      
    for(int i=0;i<N;i++)
        cout<<nums[i]<<" ";
        
        cout<<"\n";
    }
    return 0;
}
