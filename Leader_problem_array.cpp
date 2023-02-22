class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        // cout<<a[n-1]<<endl;
        // int count=a[n-1];
        // v.emplace_back(count);
        v.emplace_back(a[n-1]);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=v.back()){
                // count=a[i];
                v.push_back(a[i]);
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
        // vector <int> b;
        // b.push_back(a[n-1]);
        // for(int i=n-2;i>=0;i--)
        // {
            
        //     if(a[i]>= b.back()) b.push_back(a[i]);
             
        // }
        // reverse(b.begin(),b.end());
        // return b;
        
    }
};