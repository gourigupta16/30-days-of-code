#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void sol()
{
    int N,K;
    cin>>N>>K;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int sum=0;
    for(int i=0;i<K;i++){
        sum+=A[i];
    }
    int max=sum;
    for(int i=1;i<N-K+1;i++)
    {
        sum=sum-A[i-1]+A[i+K-1];
        if(max<sum) 
        max=sum;
    }
    cout<<max<<endl;
}
int main() 
{
	int T;
	cin>>T;
	while(T--)
	    sol();
	return 0;
}
