class Solution {
public:
    int myAtoi(string s) {
        long ans=0,i=0,sign=0;
        while(i<s.length() && s[i]==' ')
            i++;
            if(s[i]=='-'){
                i++;
                sign++;
            }
            else if(s[i]=='+')i++;
        while(s[i]!='\0'){
                if(int(s[i])>57||int(s[i])<48){
                   if(sign)return -ans;
                    return ans;
                    }
                ans=ans*10+int(s[i])-48;
                if(ans>INT_MAX || ans<INT_MIN){
                    if(sign)return INT_MIN;
                    return INT_MAX;
                }
                i++;
        }
        if(sign)return -ans;
        return ans;
    }
};
