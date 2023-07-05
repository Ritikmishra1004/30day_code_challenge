#include<stdio.h>
int main()
{
    int ary[5];
    printf("enter five integers");
    for(int i=0;i<5;++i){
    scanf("%d",&ary[i]);
    }
    printf("displaying integer");
    for(int i=0;i<5;++i)
    {
        printf("%d\n",ary[i]);
    }
}
