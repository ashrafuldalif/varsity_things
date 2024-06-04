//problem no : 05 
// name of the problem : write a program that will find the location of a given item in a sorted array using binary search algorithm

#include <stdio.h>
int main(){
    int n,item,beg,end,mid;
    printf("enter the size of the array :\t");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements for the array :\t",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("which elements location do you wanna search :\t");
    scanf("%d",&item);
    beg=0;
    end=n-1;
    mid=end/2;
    while(beg<=end){
        if(item<arr[mid]){    
            printf("enter the size of the array :\t");
            end=mid-1;
            
        }
        else if (item==arr[mid]){
            printf("%d is the location where %d element is found ",mid+1,item);
            break;
        }
        else{
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(beg>end){
        printf("%d is not in the array ",item);
    }
}