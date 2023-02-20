class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here
        vector<int> v;
        map<int ,int> mp;
        for(int i=0;i<n;i++){
            // if(n<=3){
            //     mp[nums[i]]++;
            // }
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
          if(mp[i]>n/3){
              v.push_back(mp[i]);
          }
            
            
        }
        
        // for(auto it : mp){
        //     if(it.second>n/3){
        //       v.push_back(it.first);  
        //     } 
        // }
        if(v.empty()){
            v.push_back(-1);
            return v;
        }
        else{
            return v;
        }
        
        
Easiest - Boyer-Moore Majority Vote algorithm : 

vector<int> Solve(int n, vector<int>& nums) {

        // Code here

        int num1 = -1, num2 = -1, count1 = 0, count2 = 0, i;

  

        for(int i=0;i<n;i++)

        {

 

            if(num1==nums[i]){

            count1++;

            }

 

            else if(num2==nums[i]){

            count2++;

            }

 

            else if(count1==0){

            num1=nums[i];

            count1=1;}

 

            else if(count2==0){

            num2=nums[i];

            count2=1;}

            

             else{

            count1--;

            count2--;

            }

 

 

        }

 

 

        

        vector < int > ans;

          count1 = count2 = 0;

          

          for (int i = 0; i < n; i++) 

          {

                if (nums[i] == num1)

                  count1++;

                else if (nums[i] == num2)

                  count2++;

          }

          

          if (count1 > n / 3)

            ans.push_back(num1);

          if (count2 > n / 3)

            ans.push_back(num2);

    

    if(ans.size()==0) return {-1};

    

  return ans;

    }
    }
};