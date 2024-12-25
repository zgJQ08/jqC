#include <stdio.h>

int main(){
    while(1){
        int N, M;
        scanf("%d%d", &N, &M);
        
        if(N==0 && M==0){
            printf("0 0\n"); 
            break;
        }
                         //餘數       //基偶
        int nums[10000], mod[10000], eo[10000];
        for(int i=0;i<N;i++){
            scanf("%d", &nums[i]);
            mod[i] = nums[i] % M;          
            eo[i]  = (nums[i] % 2) ? 1:0; 
        }
        
        // 泡沫排序
        for(int i=0;i<N-1;i++){
            for(int j=0;j<N-1-i;j++){
                int swap=0;
                
                if(mod[j]>mod[j+1]) swap=1; //先比餘數

                else if(mod[j]==mod[j+1]){ //相同

                    if(eo[j]<eo[j+1]) swap=1; //基偶 基在前

                    else if(eo[j] && eo[j+1] && nums[j]<nums[j+1]) swap=1; //都基 大在前

                    else if(!eo[j] && !eo[j+1] && nums[j]>nums[j+1]) swap=1; //都偶 小在前
                }
                
                //交換要換全部的東西^^
                if(swap){
                    int t=nums[j]; nums[j]=nums[j+1]; nums[j+1]=t;
                    t=mod[j];  mod[j]=mod[j+1];   mod[j+1]=t;
                    t=eo[j];   eo[j]=eo[j+1];     eo[j+1]=t;
                }
            }
        }


    printf("%d %d\n", N, M);
        for(int i=0;i<N;i++){
            printf("%d\n", nums[i]);
        }
    }
}
