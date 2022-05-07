#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int count=0;
        string jewels,stones;
        cin>>jewels>>stones;
        for(int i=0;i<jewels.length();i++)
        {
            for(int j=0;j<stones.length();j++)
            {
                if(jewels[i]==stones[j])
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
