#include<stdio.h>
int main()
{
    int ary[10],i,sum=0;
    float avg;
    printf("enter any ten number");
    for(i=0;i<10;i++)
    scanf("%d",&ary[i]);
    for(i=0;i<10;i++)
      sum=sum+ary[i];
    avg=sum/10.0; 
    printf("averagen is %f",avg);

    printf("\n");
    return 0;
    

}