#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,sum=0;
        cin>>N;
        int p[N],s[N];
        for(int i=0;i<N;i++)
        {
            cin>>p[i];
            cin>>s[i];
        }
        
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(p[i]==p[j])
                {
                    if(s[i]>s[j])
                    s[j]=0;
                    else
                    s[i]=0;
                }
            }
            }
        
        for(int i=0;i<N;i++)
        {
            if(p[i]==9 || p[i]==10 || p[i]==11)
            sum=sum;
            else
            sum=sum+s[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
