class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
     int s=0;
     int e=arr.size()-1;
     while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            // Ascending slope: peak is to the right
            s=mid+1;
        }else{
            // Descending slope or at the peak: search left including mid
            e=mid;
        }
        
     }
     //pointing to the peak
     return s;

    }
};