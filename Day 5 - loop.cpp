#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int D,N;
        cin>>D>>N;
        do
        {
            int sum=0;
            for(int i=1;i<=N;i++)
            {
                sum=sum+i;
            }
            N=sum;
            D--;
        }
        while(D>0);
        cout<<N<<endl;
    }
    return 0;
}
