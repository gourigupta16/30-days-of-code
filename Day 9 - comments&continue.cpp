#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int rows;
        cin>>rows; /*to input total number of rows for the pattern*/
        for(int i=1;i<=rows;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(i%2==0) 
                continue;  //eliminating the even number rows
                cout<<"*";            
            }
            cout<<endl; 
        }
    }
    return 0;
}
