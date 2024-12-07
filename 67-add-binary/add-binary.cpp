class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string str="";
        while(i>=0&&j>=0){
            int sum=(a[i]-'0')+(b[j]-'0')+carry;
            carry=sum/2;
            int digit=sum%2;
            str+=to_string(digit);
            i--;
            j--;
        }
        while(i>=0){
            int sum=(a[i]-'0')+carry;
            carry=sum/2;
            int digit=sum%2;
            str+=to_string(digit);
            i--;
        }
        while(j>=0){
            int sum=(b[j]-'0')+carry;
            carry=sum/2;
            int digit=sum%2;
            str+=to_string(digit);
            j--;
        }
        if(carry>0){
            str+=to_string(carry);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};