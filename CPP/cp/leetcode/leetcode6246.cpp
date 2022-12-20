#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    vector<int> index;
    int pos=0;
    for(int i=0;i<s.size();i++)    
    {
        if(t[pos]==s[i])
            pos++;
        if(pos==t.length())break;
    }
    cout<<t.length()-pos;
}
 