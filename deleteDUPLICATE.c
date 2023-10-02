
#include<stdio.h>


int main(){

   
   int array[25];
  int i, j, k, size;
   
   
   printf("Enter the size of the array\n");
   scanf("%d",&size);

   
   for(i=0;i<size;i++){
      
      for(j = i+1; j < size; j++){
          
         if(array[i] == array[j]){
             
            for(k = j; k < size; k++){
               array[k] = array[k+1];
            }

            j--;
            
            size--;
         }
      }
   }
   
   
   printf("\nNew Array :-\n");
   for(i=0;i<size;i++){
      printf("%d ",array[i]);
   }
}

}