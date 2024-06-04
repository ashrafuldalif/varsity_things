#include<iostream>
using namespace std;
int main(){
    int n,target,ans[2];
    bool tf=true;
    cout<<"enter the length of the array : \t";
    cin>>n;
    int nums[n],i=n; 
    while(i--){
        cin>>nums[i];
    }
    cout<<"target :\t";
    cin>>target;
    for(i=0;i<=n;i++){
        if (tf)
        {

        
        for(int j=0;j<=n;j++){
            int temp =nums[i]+nums[j];
            if(target== temp && i!=j){
                ans[0]=i;
                ans[1]=j;
                break;
        }
            
        }
        
        }
    }
                cout<<"["<<ans[0]<<" , "<<ans[1]<<"]";
}