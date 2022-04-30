#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char ch;
        cin>>ch;
        if ((ch == 'A') || (ch == 'E')|| (ch == 'I')|| (ch == 'O')|| (ch == 'U')|| (ch == 'a')|| (ch == 'e')|| (ch == 'i')|| (ch == 'o')|| (ch == 'u'))
        cout<<"Alaphabet '"<<ch<<"' is a vowel"<<endl;
        else
        cout<<"Alaphabet '"<<ch<<"' is a consonant"<<endl;
    }
    return 0;
}
