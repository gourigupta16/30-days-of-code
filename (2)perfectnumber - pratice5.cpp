#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,sum=0;
        cin>>n;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            sum=sum+i;
        }
        if(sum==n)
        cout<<"Perfect number"<<endl;
        else
        cout<<"Not a Perfect number"<<endl;
    }
    return 0;
}
