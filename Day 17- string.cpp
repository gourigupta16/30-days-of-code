#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int sum=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>48 && s[i]<58)
            sum=sum+(s[i]-48);
        }
        cout<<sum<<endl;
    }
    return 0;
}
