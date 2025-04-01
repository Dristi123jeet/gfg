//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++
class Solution{
    public:
     vector<long long int> twoOddNum(long long int Arr[], long long int N) {
        map<long long int, int> mpp;
        vector<long long int> ans;
        
        // Count occurrences of each element
        for (int i = 0; i < N; i++) {
            mpp[Arr[i]]++;
        }

        // Extract elements with odd occurrences
        for (auto& p : mpp) {
            if (p.second % 2 != 0) {
                ans.push_back(p.first);
            }
        }
        
        // Ensure the answer is in descending order
        sort(ans.rbegin(), ans.rend());

        return ans;
}
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends