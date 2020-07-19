class Solution {
public:
    vector<int>arr1;
    vector<int>arr2;
    string addBinary(string a, string b) {
        vector<int>add;
        for(int i=0;i<a.length();i++)
            arr1.push_back(int(a[i]-48));
        for(int i=0;i<b.length();i++)
            arr2.push_back(int(b[i]-48));
        
        
        
        int l1=arr1.size();
        int l2=arr2.size();
        int carry=0,temp;
        while(l1 && l2){
            temp=arr1[l1-1]^arr2[l2-1]^carry;
            add.push_back(temp);
            if((arr1[l1-1] && arr2[l2-1]) || (arr1[l1-1] && carry)||(arr2[l2-1] &&carry))
                carry=1;
            else
                carry=0;  
            l1--;
            l2--;
        }
        while(l1){
            temp=arr1[l1-1]^carry;
            add.push_back(temp);
            if(arr1[l1-1] && carry)
                carry=1;
            else
                carry=0; 
            l1--;
        }
        while(l2){
            temp=arr2[l2-1]^carry;
            add.push_back(temp);
            if(arr2[l2-1] && carry)
                carry=1;
            else
                carry=0; 
            l2--;
            
        }
        if(carry)
            add.push_back(carry);
        reverse(add.begin(),add.end());
        if(add.empty()) add={0};
        string str;
        for(int i=0;i<add.size();i++){
            if(add[i]) str+='1';
            else str+='0';
        }
        return str;
    }
};