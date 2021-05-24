#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int len = 0, bre = 0;
        int i;
        for(i=n-1; i>0; i--){
            if(arr[i]==arr[i-1]){
                len = arr[i];
                break;
            }
        }
        for(int j = i-2; j>0; j--){
            if(arr[j]==arr[j-1]){
                bre = arr[j];
                break;
            }
        }
        if(len*bre > 0){
	        cout<<len*bre<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
    }
    return 0;
}