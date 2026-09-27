class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>skipword;
        string result;

        for( char &ch:s){
            if(ch=='('){
                skipword.push(result.length());
            }else if(ch==')'){
                int l=skipword.top();
                skipword.pop();
                reverse(result.begin()+l,result.end());
                
            }else{
                result.push_back(ch);
            }
        }
        return result;
    }
};