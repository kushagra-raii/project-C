#include <stdio.h>
void main()
{
   int i,j,noOfRows;
   printf("Input number of rows : ");
   scanf("%d",&noOfRows);
   for(i=1;i<=noOfRows;i++)
   {
	for(j=1;j<=noOfRows;j++){
       if (i==j||i==noOfRows+1-j){
                    printf("*");

                }
                else printf(" ");  
    }
	   printf("\n");
   }
}