#include <bits/stdc++.h>
using namespace std;
int longestSquareStreak(vector<int> &nums)
{
    map<int, bool> m1;
    for (auto i : nums)
        m1[i] = true;
    int maxi = -1;
    auto it = m1.rbegin();
    for (; it != m1.rend(); it++)
    {
        int temp = 0;
        int sqr = it->first;
        while (m1[sqr])
        {
            
            temp++;
            m1[sqr] = false;
            int tempo = sqrt(sqr);
            if (tempo * tempo == sqr)
                sqr = tempo;
            else
                break;
        }
        if (temp < 2)
            temp = -1;
        if (maxi < temp)
            maxi = temp;
    }
    return maxi;
}

int main()
{
    vector <int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    cout<<endl<<longestSquareStreak(nums);
    return 0;
}