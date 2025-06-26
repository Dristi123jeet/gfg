// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        // code here
           // code here
        int arr[]={2000,500,200,100,50,20,10,5,2,1};//for store note values
        int notes=0,i=0;
        vector<int> ans;//for store answer
        while(N){
            notes=N/arr[i];//we do from start and if it is divisible add it into ans
            while(notes--){
                ans.push_back(arr[i]);
            }
            N%=arr[i];//remove that much value
            i++;//increase index for increase
        }
        return ans; 
        
    }
};