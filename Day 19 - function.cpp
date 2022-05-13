#include <iostream>
using namespace std;

void division(int a, int b, int &q, int &r)
{
  *(&q)=a/b;
  *(&r)=a%b;
}

int main()
{
    int a,b,q,r;
    cin>>a>>b;
    division(a,b,q,r);
    cout<<q<<" "<<r<<endl;
}
