#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int i,total,n;
  
  printf("Rolling the dice...\n");
  
  srand((unsigned int)time(NULL));
  for(i=1; i<=2; i++){
    total += n = 1 + rand() % 6;     
      printf("Die %d：%d\n",i,n);
  }
       printf("Total value: %d\n",total);

 return 0;

}
