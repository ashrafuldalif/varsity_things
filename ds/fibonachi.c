#include<stdio.h>

int fibonachi (int a){

if(a<=1){
return a;
}
else
return fibonachi (a-1) +fibonachi(a-2);

}

int printFib(int n){

    for(int i=1;i<=n;i++){
        printf("%d\t",fibonachi(i));
    }
}
int main(){
    int inp,fib;
    scanf("%d",&inp);    
    printFib(inp);


    // for(int i=1;i<=inp;i++){
    //     printf("%d\t",fibonachi(i));
    // }
}

