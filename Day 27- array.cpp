#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        int A[N];
        for(int i=0;i<N;i++)
        cin>>A[i];
        int count=(N+K)/2;
        sort(A,A+N);
        cout<<A[count]<<endl;
    }
    return 0;
}
