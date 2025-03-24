//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


 
class Solution {
  public:
  
 int getIbit(int n, int i){
          if((n&(1<<i-1))==0)
              return 0;
          else
              return 1;
        }
int setIbit(int n, int i){
    
          return n|(1<<i-1);
        }
int clearIbit(int n, int i){
          return n&(~(1<<i-1));
        }
    void bitManipulation(int num, int i) {
        // your code here

        cout<<getIbit(num,i)<<" ";
        cout<<setIbit(num, i)<<" ";
        cout<<clearIbit(num,i)<<" ";
    }
};





//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends