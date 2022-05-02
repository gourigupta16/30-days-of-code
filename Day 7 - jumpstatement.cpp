#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    for(int i=pow(10,N-1);i<pow(10,N);i++)
	    {
	        if(i%2!=0 && i%3==0 && i%9!=0)
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
