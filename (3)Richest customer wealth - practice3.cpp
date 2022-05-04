#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int m,n,count;
        cin>>m>>n;
        int accounts[m][n],sum[m];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>accounts[i][j];
            }
        }
        
        for(int i=0;i<m;i++)
        {
            int a=0;
            for(int j=0;j<n;j++)
            {
                a=a+accounts[i][j];
            }
            sum[i]=a;
        }
        
        for(int i=0;i<m-1;i++)
        {
            if(sum[i]>=sum[i+1])
            count=sum[i];
            else
            count=sum[i+1];
        }
        cout<<count<<endl;
    }
    return 0;
}
