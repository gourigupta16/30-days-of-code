#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--) 
    {
        int N,count1=0,count2=0;
        cin>>N;
        string s2=" ";
	    string s1;
	    for(int i=0;i<N;i++)
	    {
	        string s;
	     	cin>>s;
        	if(s==s1||i==0)
        	{
        	    s1=s;
        	    count1++;
        	}
		    else
		    {
		        count2++;
			    s2=s;      
		  	}
		 }
	     if(count1>count2)
	     cout<<s1<<endl;
	     else if(count2>count1) 
	     cout<<s2<<endl;
	     else
	     cout<<"Draw"<<endl;	 
    }
    return 0;
}
