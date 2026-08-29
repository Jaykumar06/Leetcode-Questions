class Solution {
public:
    bool allcapital(string word){
        for(char &ch: word){// ALL capital
        if(ch <'A' || ch >'Z')
            return false;
    }
        return true;
}
bool allsmall(string word){
     for(char &ch:word){
         if(ch <'a' || ch >'z')
             return false;
    }
        return true;
}

    bool detectCapitalUse(string word) {
       if(allsmall(word)|| allcapital(word)|| allsmall(word.substr(1))){
        return true;
       }
       return false;
  }
};