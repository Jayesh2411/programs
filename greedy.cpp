#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int i=0;
        int arr[n];
        while(i<n){
            cin>>arr[i++];
        }
        int sum=0;
        sort(arr,arr+n,greater<int>());
        for(int j=n-1;j>=0;j--){
            int quo=k/arr[j];
            sum+=quo*arr[j];
            k=k-quo*arr[j];
        }
        cout<<sum<<endl;
        
        
    }
    return 0;
}

