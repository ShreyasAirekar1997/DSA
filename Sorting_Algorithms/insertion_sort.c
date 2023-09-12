
#include <stdio.h>
#include "stdlib.h"



int main()
{
    
   //Insertion Sort algorithm 
int j =0,temp ;    
   int arr[6]={4,2,1,5,7,3};
     for(int i=1;i<6;i++){
         j = i-1; 
         temp = arr[i]; 
         
         while(j>=0 && arr[j]>temp )
         {
             arr[j+1]= arr[j];
               j--;
         }
         arr[j+1]= temp; 
         
     }
     
     for(int i =0 ;i<6;i++)
     {
         printf("Sorted Array:%d \n",arr[i]);
     }
   
}
