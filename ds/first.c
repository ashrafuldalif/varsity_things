#include<stdio.h>
int main(){
    int mark[5];

    // for(int i=0;i<5;i++){
    //     printf("mark [%d] =\t",i+1);
    //     scanf("%d",&mark[i]);
    // }

    printf("enter five marks : \t");
    scanf("%d %d %d %d %d",&mark[0],&mark[1],&mark[2],&mark[3],&mark[4]);
    for(int i=0;i<5;i++){
        printf("mark [%d] = %d\n",i+1,mark[i]);
    }

return 0;
}