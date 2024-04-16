#include <stdio.h>

int main() {
  int a, m=1, sum=0;
  while(1){
    sum=0;
    printf("Enter an integers>>");
    scanf("%d", &a);
    if(a==0) break;
    for(int i=1; i<=10; i++){
      m=1;
      for(int j=0; j<i; j++){
        m*=10;
      }
     if(m>=a){
       m=m/10;
       break;
     }
    }
    while(m>=1){
      sum+=a/m;
      a-=(a/m)*m;
      m/=10;
    }
    printf("%d\n", sum);
  }
  return 0;
}
