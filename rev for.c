#include<stdio.h>
int main() {
    int n;
    int rev=0;
    scanf("%d",&n);
    for(int i=n;i!=0;i/=10){
        int a=i%10;
        rev=rev*10+a;

    }
    printf("%d ",rev);
    return 0;
}

