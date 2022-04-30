#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        float D,R,I,r1,r2;
        D=((b*b)-(4*a*c));
        if(a==0)
        cout<<"Invalid Equation"<<endl;
        else if(D==0)
        {
            cout<<"Roots are real and same"<<endl;
            r1=(-b/(2*a));
            cout<<"Roots are r1 = r2 = "<<r1<<endl;
        }
        else if(D>0)
        {
            cout<<"Roots are real and distinct"<<endl;
            r1=(-b+sqrt(D)/(2*a));
            r2=(-b-sqrt(D)/(2*a));
            cout<<"Roots are r1 = "<<r1<<" and r2 = "<<r2<<endl;
        }
        else
        {
            cout<<"Roots are complex"<<endl;
            R=(-b/(2*a));
            I=(sqrt(-D)/(2*a));
            cout<<"Roots are r1 = "<<R<<" + i"<<I<<" and r2 = "<<R<<" - i"<<I<<endl;
        }
    }
    return 0;
}
