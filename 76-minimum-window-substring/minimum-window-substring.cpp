class Solution {
public:
    string minWindow(string s, string t) {
        int arr[128]={0};  //128 for A-Z && a-z
        int req[128]={0};
        int low=0;
        int high=0;
        string res="";
        int c=0;
        int minl=INT_MAX;
        int start_in=0;
        
        for(int high=0;high<t.size();high++){ // 1. cal no. of all characters in 't'
            req[t[high]]++;
        }
        // 2. Expand the window using the 'high' pointer over 's'
        for(int high=0;high<s.size();high++){
            arr[s[high]]++;
            if(arr[s[high]]<=req[s[high]]) c++;
            
            while(c==t.size()){ // 3. When the window contains all characters needed (c == t.size()), shrink from the left
                int len=high-low+1;

                if (len < minl){
                minl=len;
                start_in=low; //the index where from substring start 
                }
                arr[s[low]]--;

                // If removing s[low] drops its count below what 't' requires, window is no longer valid
                if(arr[s[low]]<req[s[low]]) c--;
                low++;
               
            }
        }
    
        if(minl==INT_MAX){
            return "";

        }else{
            for(int i=start_in;i<start_in+minl;i++){
                res+=s[i];
            }
            return res;
        }
    }

    
};