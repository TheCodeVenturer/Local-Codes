//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxArea(int matrix[MAX][MAX], int rows, int cols) {
        vector<int> row(cols,0);
        int sol=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==1)
                    row[j]++;
                else
                    row[j]=0;
            }
            stack<int>st;
            for(int j=0;j<=cols;j++)
            {
                while(!st.empty() && (j==cols || row[st.top()]>=row[j]))
                {
                    int height = row[st.top()];
                    st.pop();
                    int width = j;
                    if(!st.empty())width = j-st.top()-1;
                    sol = max(height*width,sol);
                }
                st.push(j);
            }
        }
        return sol;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends