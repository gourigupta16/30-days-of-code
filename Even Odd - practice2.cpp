#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        cout<<"Number "<<n<<" is even"<<endl;
        else
        cout<<"Number "<<n<<" is odd"<<endl;
    }
    return 0;
}
