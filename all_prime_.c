#include<stdio.h>
#include<math.h>
int prime(int p,int q){
    int i,j,n,count;
    for(n=p;n<=q;n++){
        for(i=2,count=0;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                count++;
            }
        
        }
        if(count==0 && n!=1)
            printf("%d,",n);
        }
        
}
void main()
{
    int p,q;
    printf("Enter range:");
    scanf("%d %d",&p,&q);
    prime(p,q);
        
}













#include<stdio.h>
#include<math.h>
int prime(int p){
    int i,j,n,count;
    // for(n=p;n<=q;n++){
        for(i=2,count=0;i<=sqrt(n);i++)
        {
            if(n%i==0)
                count++;
        }
        return n;
        // if(count==0 && n!=1)
        //     printf("%d,",n);
        // }
}
void main()
{
    int p,q,kk,n;
    printf("Enter range:");
    scanf("%d %d",&p,&q);
    for(n=p;n<=q;n++){
    kk=prime(p);
    printf("%d",kk);
    
}
}
