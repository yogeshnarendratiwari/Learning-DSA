#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    int minCount=0,maxCount=0;
    
    for(int i=0 ; i<n ; i++){
        if(arr[i]<min)
        {
            min=arr[i];
            minCount++;
        }
         if(arr[i]>max)
        {
            max=arr[i];
            maxCount++;
        }
    }
    cout<<maxCount<<" "<<minCount<<endl;
    
    
    
}