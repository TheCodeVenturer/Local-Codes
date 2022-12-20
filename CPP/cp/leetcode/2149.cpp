#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
bool validate(int k,int ele)
{
    if(k%2==0 && ele>=0)return true;
    if(k%2==1 && ele<0)return true;
    return false;
}
vector<int> rearrangeArray(vector<int> &arr)
{
    int k = 0, i = 0;
    for(int i=0;i<arr.size();i++)
    {
        if(!(k<=i && validate(k,arr[k])))
            swap(arr[k],arr[i]);
        while(k<=i && validate(k,arr[k]))
            k++;
        for(auto ele:arr)
            cout<<ele<<" ";
        cout<<endl<<i<<" "<<k<<endl;
    }
    return arr;
}
int main()
{
    vector<int> v1 = {-1, -2, -4,3, 1, 2};
    // vector<int> v1 = {-1, 1};
    v1 = rearrangeArray(v1);
    cout << endl
         << "sol-\n";
    for (auto i : v1)
        cout << i << " ";
    return 0;
}