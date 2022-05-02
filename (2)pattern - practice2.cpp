#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int rows;
        cin>>rows;
        for(int i=1;i<=rows;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"*";            
            }
            cout<<endl;
        }
        cout<<"\n";
    }
    return 0;
}
