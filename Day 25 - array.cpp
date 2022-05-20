#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int A[4],count=0;
    for(int i=0;i<4;i++)
    {
        cin>>A[i];
        if(A[i]>=10)
        count++;
    }
    
    cout<<count<<endl;
}
