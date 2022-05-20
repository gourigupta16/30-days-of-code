#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int T,count=0;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        
        if(A[N-1]==0)
        count++;
        
        if(count==0)
        cout<<N-1<<endl;
        else
        cout<<N-2<<endl;
        
    }
    return 0;
}
