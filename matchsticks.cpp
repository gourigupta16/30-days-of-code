#include <iostream>
using namespace std;

int main()
{
    int A[]={1,2,3,3};
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<n;i++)
    {
        cout<<5-A[i]<<" ";
    }
    return 0;
}
