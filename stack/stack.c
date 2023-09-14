
#include <stdio.h>
int top = -1; 
  int stack[5] ; 
int push(int num)
{
     if(top == 4  )
     {
      printf("Stack Overflow !!!! ");   
     }
     else
     {
         top++; 
          stack[top]= num ;
          
          
     }
     return 0 ; 
}

   int pop(){
       if (top == -1 )
       {
           printf("Stack underflow !!!");
       }
       else{
                
           stack[top]= 0; 
           top --; 
       
            
       }
       return 0 ; 
   }
   
   
  void print_stack()
   {
       for (int i=0;i<5;i++){
          printf("stack: %d\n",stack[i]);
       }
   }


int main()
{
  int stck[5] ; 
    push(4);
    push(4);
    push(4);
    push(4);
     push(4); 
    pop();
    pop();
    pop();
     pop();
      pop();
       pop();
      print_stack();
   
