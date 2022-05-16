#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[26];
	    int b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	    for(int i=0;i<26;i++)
	    {
	        cin>>a[i];
	    }
	    int price=0;
	    string s;
	    cin>>s;
	    int l=s.length();
	    for(int i=0;i<l;i++)
	    {
	        int temp=(int(s[i])-97);
	        b[temp]++;
	    }
	    for(int i=0;i<26;i++)
	    {
	        if(b[i]==0)
	        {
	            price+=a[i];
	        }
	    }
	    cout<<price<<endl;
	}
	return 0;
}
