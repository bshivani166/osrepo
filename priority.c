#include<stdio.h>


void main(){
    int students[10][2],i,j,tempStd,tempGifts;
    
    for (i=0;i<10;i++){
        printf("Enter Number Of Gifts For Student %d: ",i+1);
        students[i][0] = i+1;
        scanf("%d",&students[i][1]);
    }

     for(i=0;i<10;i++)
     {
      for(j=i+1;j<10;j++)
      {
         if(students[i][1] < students[j][1])
         {
            tempGifts = students[i][1];
            tempStd = students[i][0];

            students[i][0] = students[j][0];
            students[i][1] = students[j][1];
            
            students[j][1]=tempGifts;
            students[j][0]=tempStd;
         }
      }
   }
    printf("Student Gifts\n");
    for (i=0;i<10;i++){
        printf("%d\t %d\n",students[i][0],students[i][1]);
    }    

}
