1. int k=0;
    int n=6;
    int a[n]={0,0,5,5,0,0};
        
    for(int i=0;i<n;i++){
        int curr_counter=0;
        for(int j=i;j<n;j++){
            curr_counter+=a[j];
            cout<<curr_counter<<endl;
            if(curr_counter==0) k++;
            cout<<k<<endl;
        }
        
    }
    cout<<k;


2.

using hash maps with toc o(n);
unordered_map<int,int> map;
    long long int pre_sum=0;
    long long int k=0;
    for(int i=0;i<n;i++){
        pre_sum += a[i];
        
        if(pre_sum==0) k++;
        if(map[pre_sum]) k+=map[pre_sum] ;
        
        map[pre_sum]++;
        
    }
    
    return k;

