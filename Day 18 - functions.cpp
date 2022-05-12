#include <bits/stdc++.h>
using namespace std;

bool isPower(int b, int N)
{
    int temp=b;
    while(temp<N)
    temp*=b;
    if(temp==N)
    return 1;
    else
    return 0;
}

int main()
{
    int b,N;
    cin>>b>>N;
    if(isPower(b,N))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
