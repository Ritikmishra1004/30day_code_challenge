#include<stdio.h>
int main()
{
    int ary[5]={3,2,4,5,1};
    for(int i=0;i<5;i++){
        for(int j=i;j < 5 ;j++){
         if(ary[j] < ary[i]){
            int temp = ary[j];
            ary[j] = ary[i];
            ary[i] = temp;
           // break;
         }
        }
    }
     for (int i = 0; i < 5; i++) {
        printf("%d ", ary[i]);
    }
    return 0;
}