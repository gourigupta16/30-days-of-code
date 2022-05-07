#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    int count=0;
	    
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && i+2<s.length())
	        {
	            cout<<"Good"<<endl;
	            count=1;
	            break;
	        }
	    }
	    if(count==0)
	    {
	        cout<<"Bad"<<endl;
	    }
	    
	}
	return 0;
}
