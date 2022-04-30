#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count= (a>b)?((a>c?a:c)):((b>c)?b:c);
    cout<<count<<endl;
    return 0;
}
