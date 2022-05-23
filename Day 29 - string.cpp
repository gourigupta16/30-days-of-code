#include<string>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	   string k;
	   cin>>k;
	   int count=0;
	   for(int j=0;j<k.size();j++)
	   {
	       for(int l=0;l<s.size();l++)
	       {
	           if(k[j]==s[l])
	           {
	               count=1;
	               break;
	           }
	           else
	           {
	               count=0;
	               continue;
	           }
	       }
	       if(count==0)
	       break;
	   }
	   if(count==1)
	   cout<<"Yes"<<endl;
	   else 
	   cout<<"No"<<endl;
	}
	return 0;
}
