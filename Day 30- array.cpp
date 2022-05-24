#include <iostream>
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
	    cin>> A[i];
	    int count=1;
	    for(int i=0;i<N-1;i++)
	    {
	        if(A[i]!=A[i+1])
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
