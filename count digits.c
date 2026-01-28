#include<stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=n;i!=0;i/=10){
        int a=i%10;
      count++;

    }
    printf("%d ",count);
    return 0;
}

