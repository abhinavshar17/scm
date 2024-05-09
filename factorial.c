#include<stdio.h>
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;

    }
    return f;
}
    int per(int n,int r){
    return fact(n)/fact(r)*fact(n-r);
    }

int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int r;
    printf("value of r");
    scanf("%d",&r); 
    int abhi=per(n,r);
    printf("%d",abhi);

}