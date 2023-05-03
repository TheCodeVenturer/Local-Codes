//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int> st;
        for(int &asteroid:asteroids)
            if(st.empty() || asteroid>0)st.push(asteroid);
            else{
                while(!st.empty() && st.top()>0 && st.top()<abs(asteroid))st.pop();
                if(!st.empty() && st.top() == abs(asteroid))st.pop();
                else
                    if(st.empty() || st.top()<0)st.push(asteroid);
            }
        vector<int>sol(st.size());
        for(int i=sol.size()-1;!st.empty();i--,st.pop())
            sol[i]=st.top();
        return sol;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends