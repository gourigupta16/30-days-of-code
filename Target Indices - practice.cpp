#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,target,temp;
        cin>>N;
        int nums[N];
        for(int i=0;i<N;i++)
        cin>>nums[i];
        cin>>target;
        
        sort(nums,nums+N); 
        
        for(int i=0;i<N;i++)
        {
            if(nums[i]==target)
            cout<<i<<" ";
        }
    }
    return 0;
}
