#include <stdio.h>
int main(){
    int sum = 0, temp;
    for(int i = 0;i<5;i++){
        scanf("%d",&temp);
        sum += temp;
    }
    printf("%d",sum);
}