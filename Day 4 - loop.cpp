#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,marks,sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>marks;
            sum=sum+marks;
        }
        cout<<"Average marks for student "<<T+1<<" are "<<sum/n<<endl;
    }
}
