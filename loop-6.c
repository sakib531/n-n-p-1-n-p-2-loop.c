#include<stdio.h>
int main (){
    int x,y,sum=0;
    printf("input the number : ");
    scanf("%d",&y);
    for (x=1; x<=y; x++){
        sum=sum+((x)*(x+1)*(x+2));
    }
    printf("the sum : \n");
    printf("%d\n",sum=sum);
    return 0;
}

