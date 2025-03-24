//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestSubarray(vector<int>& nums, int k) {
        // code here
        int n= nums.size();
         int maxlen=0;
        map<int,int>mpp;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(sum==k){
                maxlen= max(maxlen, i+1);
            }
            int rem= sum-k;
            if(mpp.find(rem)!= mpp.end()){
                maxlen= max(maxlen, (i-mpp[rem]));
            }
            if(mpp.find(sum)==mpp.end()) mpp[sum]=i;
           
        }
        return maxlen;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends