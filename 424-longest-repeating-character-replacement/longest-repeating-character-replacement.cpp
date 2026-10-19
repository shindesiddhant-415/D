class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int arr[26]={0};
        int low=0;
        int high=0;
        int res=INT_MIN;  //use when to find the longest string

        for(int high=0;high<s.size();high++){
            arr[s[high]-'A']++; //arr[s[high]] uses the ASCII value of char e.g A-->65

            int len=high-low+1;
            int maxel=*max_element(arr,arr+26);
            int diff=len-maxel;

            while(diff>k){
                arr[s[low]-'A']--;  
                low++;
                len=high-low+1;
                maxel=*max_element(arr,arr+26);  //finding the max repeated char
                diff=len-maxel;  //diff is that for checking how much changes can make 
            }
            if(diff<=k){
                len=high-low+1;
                res=max(len,res);
            }
        }
        return res;
    }
};