#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,count1=0,count2=0;
        cin>>N;
        string s="START38";
        string c;
        for(int i=0;i<N;i++)
        {
            cin>>c;
            int x=s.compare(c);
            if(x==0)
            count1++;
            else
            count2++;
        }
        //cout<<count1<<" "<<count2<<endl;
        cout<<count1<<" "<<count2<<endl;
    }
    return 0;
}
