#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    int k,n;
    cin>>k>>n;
    vector<string>s1;
    vector<string>s2;
    bool check=false;
    while(k--)
    {
        string temp;
        cin>>temp;
        s1.push_back(temp);
    }
    while(n--)
    {
        string temp2;
        cin>>temp2;
        s2.push_back(temp2);
    }
    for(int i=0;i<s2.size();i++)
    {
        for(int j=0;j<s1.size();j++)
        {
            if(s2[i].find(s1[j])<s2[i].length())
            {
               check=true;
               break;
            }
            else if(s2[i].length()>=47)
            {
                check=true;
                break;
            }
        }
        if(check==true)
        cout<<"Good"<<endl;
        else
        cout<<"Bad"<<endl;
        check=false;
    }
   
	return 0;
}
