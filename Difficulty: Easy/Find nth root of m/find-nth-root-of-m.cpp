//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
	public:
	int nthRoot(int n, int m){
 
        int s =0;
        int e =m;
        int ans =-1;
        
        while(s<=e){
            
             int mid = s+(e-s)/2;
             
             if(pow(mid,n) == m){
                 ans =mid;
                break;
             }else if(pow(mid,n) > m){
                 e=mid-1;
             }
             else{
                
                  s=mid+1;
             }
             
        }
        
        return ans;
	}  
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends