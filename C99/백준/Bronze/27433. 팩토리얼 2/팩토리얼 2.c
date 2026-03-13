#include <stdio.h>

int main(){
    long long int n,sum = 1;
    scanf("%lld",&n);
    for(int i = 1;i<=n;i++){
        sum *= i;
    }
    printf("%lld",sum);
}