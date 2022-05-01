#include <iostream>
using namespace std;

int main()
{
  int T;
  cin>>T;
  int S[3];
  while(T--)
  {
  for(int i=0;i<3;i++)
  {
    cin>>S[i];
  }
  for(int j=0;j<3;j++)
  {
    if(S[j]<S[j+1] && S[j]<S[j+2])
    cout<<"Draw"<<endl;
    else if(S[j+1]<S[j+2])
    cout<<"B"<<endl;
    else
    cout<<"A"<<endl;
    break;
  }
  }
  return 0;
}
