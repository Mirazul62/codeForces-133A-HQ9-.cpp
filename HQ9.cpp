#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        switch(s[i])
        {
        case 'H':
        case 'Q':
        case '9':
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
