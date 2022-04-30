#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,Y;
        cin>>X>>Y;
        if(X>0 && Y>0)
        cout<<"The point ("<<X<<","<<Y<<") lies in First Quadrant"<<endl;
        else if(X<0 && Y>0)
        cout<<"The point ("<<X<<","<<Y<<") lies in Second Quadrant"<<endl;
        else if(X>0 && Y<0)
        cout<<"The point ("<<X<<","<<Y<<") lies in Third Quadrant"<<endl;
        else
        cout<<"The point ("<<X<<","<<Y<<") lies in Fourth Quadrant"<<endl;
    }
    return 0;
}
