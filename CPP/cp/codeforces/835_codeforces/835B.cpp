#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int length;
        cin>>length;
        char maxi = 'A';
        for(int i=0;i<length;i++)
        {
            char temp;
            cin>>temp;
            if(maxi=='A')
                maxi=temp;
            if(maxi<temp)
                maxi=temp;
        }
        cout<<(int)(maxi) -96<<endl;
    }
    return 0;
}