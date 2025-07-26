class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
              int n=arr.size();
        for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]){
                swap(arr[i+1],arr[i]);
            }
        }
        }
    }
};