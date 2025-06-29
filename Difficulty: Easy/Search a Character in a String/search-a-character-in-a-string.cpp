// User function Template for C++
class Solution {
  public:

    // Function to search for a character in the string
    int searchCharacter(string &s, char ch) {
        // code here
        if(s.find(ch)!=string::npos)return s.find(ch);
        else return -1;
        
    }
};
