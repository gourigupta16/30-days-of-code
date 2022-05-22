#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    cin>>A[i];
	    sort(A,A+N);
	    int count=A[1]-A[0];
	    for(int j=0;j<N-1;j++)
	    count=min(count,A[j+1]-A[j]);
	    cout<<count<<endl;
	}
	return 0;
}

