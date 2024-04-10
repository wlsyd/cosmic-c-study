#include<stdio.h>

int main(){
  int C, F, T;
  char type;
  while(1){
    printf("Enter temperature and type>>>");
    scanf("%d%c", &T, &type);
    if(T==0) break;
    if(type=='C') {
      printf("Celsius=%.1fC, Fahrenheit=%.1fF\n",  (float)T , (float)9/5*T+ 32);
    }
    else if(type=='F') {
      printf("Celsius=%.1fC, Fahrenheit=%.1fF\n",  (float)5/9*(T-32) , (float)T);
    }
  }
  return 0;
}
