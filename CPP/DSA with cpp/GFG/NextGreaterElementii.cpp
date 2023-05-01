//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        // code here
        stack<int> minStack;
        vector<int>sol(N,-1);
        for(int i=2*N-1;i>-1;i--)
        {
            while(!minStack.empty() && minStack.top()<=arr[i%N])minStack.pop();
            if(!minStack.empty() && i<N)sol[i]=minStack.top();
            minStack.push(arr[i%N]);
        }
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

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends