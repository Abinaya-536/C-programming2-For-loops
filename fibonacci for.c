#include<stdio.h>
int main() {
    int n;
    int a =0;
    int b=1;
    int c;

    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",a);
    }

    return 0;
}

