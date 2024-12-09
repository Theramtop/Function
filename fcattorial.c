#include<stdio.h>
int fact(int n){
    int factt=1,i;
    for(i=1;i<=n;i++){
        factt=factt*i;
    }
    return factt;
}
int main(){
    int n,a;
    printf("Enter a number:");
    scanf("%d",&n);
    a=fact(n);
    printf("Fact=%d",a);
}
