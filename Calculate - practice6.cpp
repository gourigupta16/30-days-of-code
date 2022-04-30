#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
        
    switch(n)
    {
        case 1: 
        cout<<"ADDITION"<<endl<<"Result: "<<a+b<<endl;
        break;
        case 2:
        cout<<"SUBTRACTION"<<endl<<"Result: "<<a-b<<endl;
        break;
        case 3:
        cout<<"MULTIPLICATION"<<endl<<"Result: "<<a*b<<endl;
        break;
        case 4:
        cout<<"DIVISION"<<endl<<"Result: "<<a/b<<endl;
        break;
        default:
        cout<<"Invalid choice";
    }
    return 0;
}
