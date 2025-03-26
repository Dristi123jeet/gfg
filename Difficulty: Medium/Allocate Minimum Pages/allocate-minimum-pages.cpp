//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// class Solution {
//   public:
  
//   int findstudent(vector<int>&arr, int cap){
//       int pg=0;int s=1;
//       for(int i=0; i<arr.size(); i++){
//           if((pg+arr[i])<c=ap)pg+=arr[i];
//           else {
//               s++;
//               pg=arr[i];
//           }
//       }
//       return s;
//   }
//     int findPages(vector<int> &arr, int k) {
//         // code here
//         int maxi= *max_element(arr.begin(), arr.end());
//         int sum= accumulate(arr.begin(), arr.end(),0);
        
            
//         // for(int i=maxi; i<=sum; i++){
//         //  int students=  findstudent(arr,i);
//         //  if(students==k)return  i;
//         // }
//         // return -1;
//         int left = maxi, right = sum, result = -1;
      
//       while (left <= right) {  // Binary search
//           int mid = left + (right - left) / 2;
//           int students = findstudent(arr, mid);
          
//           if (students <= k) {  // Try to minimize max pages allocated
//               result = mid;
//               right = mid - 1;
//           } else {
//               left = mid + 1;
//           }
//       }
//       return result;
//     }
// };
class Solution {
  public:
  
  int findstudent(vector<int>& arr, int cap) {
      int pg = 0, s = 1;  // `s` is the number of students needed
      for(int i = 0; i < arr.size(); i++) {
          if ((pg + arr[i]) > cap) {  // Start new student allocation
              s++;
              pg = arr[i];
          } else {
              pg += arr[i];  // Continue allocating pages
          }
      }
      return s;
  }
  
  int findPages(vector<int> &arr, int k) {
      if (arr.size() < k) return -1;  // If students are more than books, impossible to allocate
      
      int maxi = *max_element(arr.begin(), arr.end());
      int sum = accumulate(arr.begin(), arr.end(), 0);
      
      int left = maxi, right = sum, result = -1;
      
      while (left <= right) {  // Binary search
          int mid = left + (right - left) / 2;
          int students = findstudent(arr, mid);
          
          if (students <= k) {  // Try to minimize max pages allocated
              result = mid;
              right = mid - 1;
          } else {
              left = mid + 1;
          }
      }
      return result;
  }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends