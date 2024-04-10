#include<stdio.h>

int fibo(int x){
  if(x==0) return 0;
  else if(x==1) return 1;
  else{
    return fibo(x-1)+fibo(x-2);
  }
}

int main(){
  int n1, n2, count=0, i=0;
  while(1){
    printf("Enter two integers>>");
    scanf("%d %d", &n1, &n2);
    if(n1==0 && n2==0) break;
     else{
      while(1){
      i+=1;
      if(fibo(i)>=n1 && fibo(i)<=n2){
        printf("%d ", fibo(i) );
      }
      else if(fibo(i)>n2) break;
    }
  }
    printf("\n");
    i=0; 
    count=0;
  }
  return 0;
}
