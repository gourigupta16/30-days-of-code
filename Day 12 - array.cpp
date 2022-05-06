#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
	  set<int> ch;
	  ll N; 
	  cin>>N;
	  ll A[N];
	  for(ll i=0;i<N;i++) 
	  cin>>A[i];
	  for(ll i=0;i<N;i++)
	  {
	      ll B=A[i];
	      if(B>0) ch.insert(B);
	  }
	  cout<<ch.size()<<"\n";
	}
	return 0;
}
