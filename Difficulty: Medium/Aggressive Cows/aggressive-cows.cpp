//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
  bool possible(vector<int>&stalls, int dist, int k){
      int ctc=1; int last=stalls[0]; int space=0;
      for(int i=0; i<stalls.size(); i++){
          
          if((stalls[i]-last)>=dist){
              ctc++;
          last=stalls[i];
          }
          
          
      }
      if(ctc>=k)return true;
      else return false;
  }
  

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin(), stalls.end());
        int n= stalls.size();
        int l=1, h=stalls[n-1]-stalls[0];
        while(l<=h){
            int m=(l+h)/2;
            if(possible(stalls,m,k))l= m+1;
            else h=m-1;
            
        }
        return h;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends