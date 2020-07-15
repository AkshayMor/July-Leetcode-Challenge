class Solution {
public:
    string reverseWords(string s) {
        vector<string>store;
        string rev;
        string temp;
        for(auto w:s){
            if(w==' '){
                if(temp.length()){
                    store.push_back(temp);
                }
                temp.clear();
            }
            else{
                temp+=w;
            }
        }
        if(temp.length()) store.push_back(temp);
        int l= store.size();
        if(l==0) return rev;
        for(int i=l-1;i>0;i--){
            rev+=store[i];
            rev+=' ';
            
        }
        rev+=store[0];
        return rev;
        
    }
};