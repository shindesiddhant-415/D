class Solution {
public:
    string minWindow(string s, string t) {
        int arr[128]={0};
        int req[128]={0};
        int low=0;
        int high=0;
        string res="";
        int c=0;
        int minl=INT_MAX;
        int start_in=0;
        
        for(int high=0;high<t.size();high++){
            req[t[high]]++;
        }

        for(int high=0;high<s.size();high++){
            arr[s[high]]++;
            if(arr[s[high]]<=req[s[high]]) c++;
            int len=high-low+1;
           
            
            len=high-low+1;
            while(c==t.size()){
                len=high-low+1;
                if (len < minl){
                minl=min(minl,len);
                start_in=low;
                }
                arr[s[low]]--;
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