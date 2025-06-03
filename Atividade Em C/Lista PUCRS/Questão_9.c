#include <stdio.h> 

int main() { 

  int maior,menor,i,num; 
  for(i=1;i<=50;i++){ 
  printf("diga o %d numero: ",i); 
  scanf("%d",&num); 
  if(i==1){ 
      maior=num; 
      menor=num; 
  }else{ 
      }if(num>maior){ 
      maior=num; 
      }else{ 
          if(num<menor){ 
          menor=num;      
  }
  } 
  } 
  printf("O menor numero é %d, e o maior é %d", menor, maior); 
    return 0; 
} 
