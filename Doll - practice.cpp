#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll T;
	cin>>T;
	while(T--)
	{
	    ll N,K,count=0;
	    cin>>N>>K;
	    ll A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]>K)
	        count=count+1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
