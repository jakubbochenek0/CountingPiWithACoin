#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float cointhrow(){
  float result=0, i=0.5;
  int j=20;
  while(j--){
    result+= (rand() % 2)*i;
    i*=0.5;
  } 
  return result;
}

int main(){
  srand(time(0));
  int circle=0, all=0;
  for(int k=0; k!=100000; k++){
    
    float x = cointhrow();
    float y = cointhrow();
    
    if((x*x+y*y)<=1){
      circle++;
    }
    all++;
  }
  float pi=4*(float)circle/(float)all;
  
  printf("%f\n", pi);
  
  return 0;
}
