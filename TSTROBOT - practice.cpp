#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,X,count=0;
        cin>>N>>X;
        string s;
        cin>>s;
        ll A[N];
        A[0]=X;
        for(int i=0;i<N;i++)
        {
            if(s[i]=='L')
            X=X-1;
            else
            X=X+1;
            
            A[i+1]=X;
        }
        
        for(ll i=0;i<=N;i++)
        {
            for(int j=i+1;j<=N;)
            {
                if(A[i]==A[j])
                {
                    for(ll k=j;k<=N-1;++k)
                    A[k]=A[k+1];
                    --N;
                }
                else
                j++;
            }
        }
        
        for(ll i=0;i<=N;++i)
        {
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
