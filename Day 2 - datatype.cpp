#include <iostream>
using namespace std;

int main() {
    int n;
    int age[n];
    string name[n];
    float marks[n],count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>name[i];
        cin>>age[i];
        cin>>marks[i];
        count=count+marks[i];
    }
    
    cout<<"Student name and age present in class: "<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<name[i]<<" "<<age[i]<<endl;
    }
    
    cout<<"\nAverage marks of class: "<<count/n<<endl;
    return 0;
}
