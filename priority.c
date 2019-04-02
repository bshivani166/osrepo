#include<stdio.h>

void sort()
{

  //dummy sort funtion
}

void main(){
    int students[10],gifts[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter Number Of Gifts For Student %d :",i+1);
        scanf("%d",&gifts[i]);
    }
    printf("\n\nStudent\tGifts\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t%d\n",i+1,gifts[i]);
    }
}
