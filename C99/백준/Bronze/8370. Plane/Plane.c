#include <stdio.h>
int main(){
    int arr[4], sum = 0;
    for(int i = 0;i<4;i++){
        scanf("%d",&arr[i]);
        if(i % 2 == 1){
            sum += (arr[i-1] * arr[i]);
        }
    }
    printf("%d",sum);
}