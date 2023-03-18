#include <stdio.h>

int main(){
    int nums[5],i,target,sum;

    for(i=0;i<5;i++){
        printf("enter number: ");
        scanf("%d",&nums[i]);
    }
    printf("enter target:");
    scanf("%d",&target);

    for(i=0;i<5;i++){
        if(sum==target){
            printf("[%d,%d]",i-1,i);
            break;
        }
        else{
            sum=nums[i]+nums[i+1];
        }

    }
return 0;
}
