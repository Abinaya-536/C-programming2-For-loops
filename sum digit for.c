#include<stdio.h>
int main() {
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=n;i!=0;i/=10){
        int a=i%10;
        sum=sum+a;

    }
    printf("%d ",sum);
    return 0;
}

