#include <iostream>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	for(int i=0;i<=s.size();i++)
	{
	    if(s[i]==' ')
	    cout<<"\n";
	    else
	    cout<<s[i];
	}
	return 0;
}
