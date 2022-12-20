#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int length;
        cin>>length;
        set <int> s;
        for(int i=0;i<length;i++)
        {
            int temp;
            cin>>temp;
            s.insert(temp);
        }
        for(auto it = s.rbegin();it!=s.rend();it++)
        {
            for(auto it2 = s.begin();it2!=s.end();it2++){
                if(*it==*it2)break;
                if(s.count(*it-*it2)==0)
                {
                    s.insert(*it-*it2);
                }
            }
        }
        cout<<s.size()<<endl;
    }
}
/*
3 5 20
3 5 15 17 20
3 5 6 8 12 14 15 17 20
*/