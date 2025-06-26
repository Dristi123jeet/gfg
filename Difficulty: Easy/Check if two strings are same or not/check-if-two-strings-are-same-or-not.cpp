// User function Template for C++
bool areStringsSame(string s1, string s2) {
    // code here
    if(s1.size()!=s2.size())return false;
    for(int i ; i<s1.size(); i++){
        if(s1[i]!= s2[i])return false;
    }
    return true;
}