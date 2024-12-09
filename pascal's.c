#include<stdio.h>
int fact(int number){
    int k,fctoo=1;
    for(k=1;k<=number;k++){
        fctoo=fctoo*k;
    }
    return fctoo;
}
int ncr(int n,int r){
    int a,d,e,ncrr;
    a=fact(n);
   
    e=fact(n-r);
    ncrr= a/(e*a);
    return ncrr;

}

int main(){
    int i,j,k,n=10,tt;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++)
            printf(" ");
        for(j=1;j<=i;j++){
            tt=ncr(i,j);
            printf("%d",tt);
        
        }
    }
        printf("\n");

        
    }
}

    