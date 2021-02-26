#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n = 0;
    cin>>s;
    n = s.length();
    for(int i=1; i <= n;i++)
    {
            for(int j = 0;j<n-i;j++)
            {
                cout<<" ";
            }

            cout<<s.substr(n/2,min(i,n/2+1));
            if(i>n/2)
            {
                cout<<s.substr(0,i-(n/2+1));
            }
            cout<<endl;
    }
    return 0;
}
