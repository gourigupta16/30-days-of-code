#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    goto x;
    else
    goto y;
    
    x:
    cout<<"Perfect number"<<endl;
    return 0;
    y:
    cout<<"Not a Perfect number"<<endl;
     
}
