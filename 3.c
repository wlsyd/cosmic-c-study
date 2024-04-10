#include<stdio.h>

int main(){
  int n1, n2, count=0, sum=0;
  while(1){
    printf("Enter two integers>>");
    scanf("%d %d", &n1, &n2);
    if(n1==0 && n2==0) break;
    else{
      for(int i=n1; i<=n2; i++){
      for(int j=1; j<=i; j++){
        if(i%j==0) count++;
      }
      if(count==2) sum++; 
      count=0;
    }
    printf("The number of prime numbers is %d\n", sum);
    sum=0;
   }
  }
  return 0;
}
