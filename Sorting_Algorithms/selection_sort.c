
#include <stdio.h>
#include "stdlib.h"



int main()
{
    
//selection sort
int a[6]={3,4,1,2,5,9};
int temp ; 
for(int i =0 ;i<6;i++){
    for(int j=i+1;j<6;j++){
        if(a[i]>a[j])
        {
             temp =a[j]; 
            a[j]=a[i];
            a[i]=temp;
        }
    }
}
for(int i=0;i<6;i++){
   printf("sorted arr: %d \n",a[i]);
}
}
