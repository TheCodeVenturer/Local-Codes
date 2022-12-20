#include <bits/stdc++.h>

using namespace std;
/*
int main()
{
    string s1, sol = "";
    int i, length, flag = 0;
    getline(cin, s1);
    length = s1.size();
    s1 = s1 + ' ';
    for (i = length - 1; i >= 0; i--)
    {
        if (s1[i] == ' ' && i != length - 1)
        {
            int j = i;
            j++;
            while (s1[j] != ' ')
            {
                sol = sol + s1[j];
                flag = 1;
                j++;
            }
            if (flag)
            {
                sol = sol + ' ';
                flag = 0;
            }
        }
        else if (i == 0)
        {
            int j = i;
            while (s1[j] != ' ')
            {
                sol = sol + s1[j];
                j++;
                flag = 0;
            }
        }
    }
    if (sol[sol.size() - 1] == ' ')
        sol[sol.size() - 1] = '\0';
    else
        sol = sol + "\0";
    cout << sol;
}
*/
int main()
{
    string s,s1,sol="",temp="";
    stringstream sso;
    getline(cin,s);
    sso<<s;
    s="";
    while(sso>>s)
    {
        sol=temp;
        temp=s;
        temp.push_back(' ');
        temp.append(sol);
    }
    cout<<temp;
    return 0;
}