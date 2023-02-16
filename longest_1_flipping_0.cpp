             
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int i=0,j=0;
        while(i<n){
            if(arr[i]==0) m--;
            if(m<0){
                if(arr[j]==0){
                    m++;
                }
                j++;
            }
            i++;
        }
        return i-j;
    }  
};