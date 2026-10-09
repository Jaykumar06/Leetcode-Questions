class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string curr="";
        
        for(char &ch:s){
            if(ch=='('){
                if(depth>0){
                    curr+=ch;   
                }
                depth++;
            }
            else{
                depth--;
                if(depth>0){
                   curr+=ch;
                }
            }
        }
        return curr;
    }
};