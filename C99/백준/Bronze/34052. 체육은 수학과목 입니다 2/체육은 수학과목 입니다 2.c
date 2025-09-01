#include <stdio.h>
int main(){
    int sum = 0,t;
    for(int i = 0;i<4;i++){
        scanf("%d",&t);
        sum += t;
    }
    sum += 300;
    if(sum <= 1800)
        printf("Yes");
    else
        printf("No");
}