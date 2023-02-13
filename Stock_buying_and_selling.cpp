//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {

    //  Initialize buy pointer first
    int buy=0;
    // initalize flag
    int signal=1;
    for(int i=0;i<n;i++){
        
        // first value greater then 2 one check condition nd if true 
        // put it in buy
        if(price[i]<price[buy]) buy=i;
        
        // this is 310-40 situation 
        if(price[i]>price[i+1] && buy<i){
            cout<<"("<<buy<<" "<<i<<")"<<" ";
            buy=i+1;
            
            // dont forget to set flag
            signal=0;
        }
        
        // final condition and 635 wala last value
        if(i==n-1 && buy<i && price[i]>price[buy]){
            cout<<"("<<buy<<" "<<i<<")";
            signal=0;
        }
    }
    if(signal) cout<<"No Profit";
    cout<<endl;

}