#include <stdio.h>

int main(void) {
   int number[]={5,12,14,16,2,1,47,6,7};
   int i, j,temp;
   int count=sizeof(number)/sizeof(number[0]);
 
   // Logic of selection sort algorithm
   for(i=0;i<count;i++){
      for(j=i+1;j<count;j++){
         if(number[i]>number[j]){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}