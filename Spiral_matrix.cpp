class Solution{

	public:
	int findK(vector<vector<int>> &matrix, int n, int m, int k)
    {
        // Your code goes here
        // int left=0;
        // int right=m-1;
        // int top=0;
        // int bottom=n-1;
        // int d=0;
        // int count=0;
        // vector<int> v;
        // while(top<=bottom && left<=right){
        //     if(d==0){
        //         for(int i=left;i<=right;i++){
        //             // count++;
        //             // if(count==k) return a[top][i];
        //             v.emplace_back(a[top][i]);
        //         }
        //         top++;
        //     }
        //     else if(d==1){
                
        //         for(int i=top;i<=bottom;i++){
        //             // count++;
        //             // if(count==k) return a[i][right];
        //             v.emplace_back(a[i][right]);
        //         }
        //         right--;
                
        //     }
        //     else if(d==2){
               
        //         for(int i=right;i<=left;i--){
        //             // count++;
        //             // if(count==k) return a[bottom][i];
        //             v.emplace_back(a[bottom][i]);
        //         }
        //         bottom--;
                
        //     }
        //     else if(d==3){
                
        //         for(int i=bottom;i<=top;i--){
        //             // count++;
        //             // if(count==k) return a[i][left];
        //             v.emplace_back(a[i][left]);
        //         }
        //         left++;
                
        //     }
        //     d=(d+1)%4;

        // ____________________________ My method 1  ___________________________________
            
            
        // }
        
        
        // int left=0;
        // int right=m-1;
        // int top=0;
        // int bottom=n-1;
        
        // vector<int> ans;
        // while(left<=right && top<=bottom){
        //     for(int i=left;i<=right;i++)
        //         ans.push_back(matrix[top][i]);
        //     top++;
            
        //     for(int i=top;i<=bottom;i++)
        //         ans.push_back(matrix[i][right]);
        //     right--;
            
        //     if(top<=bottom){
        //         for(int i=right;i>=left;i--)
        //             ans.push_back(matrix[bottom][i]);
        //         bottom--;
        //     }
            
        //     if(left<=right){
        //         for(int i=bottom;i>=top;i--)
        //             ans.push_back(matrix[i][left]);
        //         left++;
        //     }
        // }
        
        // return ans[k-1];

        // ---------------------------------------Method 2-----------------------------------------------
        
        int left=0;
        int right=m-1;
        int top=0;
        int bottom=n-1;
        
        while(k>=1){
            for(int i=left;i<=right;++i,--k){
                if(k==1) return matrix[top][i];
            }
            ++top;
                
            
            
            for(int i=top;i<=bottom && k>=1;++i,--k){
                if(k==1) return matrix[i][right];
            }
            --right;
            
            
            if(top<=bottom){
                for(int i=right;i<=left && k>=1;--i,--k){
                   if(k==1) return matrix[bottom][i];
                }
                --bottom;
            }
            
            if(left<=right){
                for(int i=bottom;i<=top && k>=1;--i,--k){
                    if(k==1) return matrix[i][left];
                }
                ++left;
            
            }
        //    ----------------------------------------- Method 3 ----------------------------------------------------------
            
            
            
            
        }
            
        
        
    }

};