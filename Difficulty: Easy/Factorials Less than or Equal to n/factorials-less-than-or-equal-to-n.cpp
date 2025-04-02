//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
   void generateFactorials(long long n, long long fact, long long i, vector<long long>& ans) {
    if (fact > n) return;  // Base case: Stop when factorial exceeds n

    ans.push_back(fact);  // Store the current factorial
    generateFactorials(n, fact * (i + 1), i + 1, ans);  // Recursive call
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> ans;
    generateFactorials(n, 1, 1, ans);  // Start with 1! = 1
    return ans;
}

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends