#include<stdio.h>

int main() {
  int n, max1, max2=-1, temp, check, count=1, sum=0;
  while(1){
  printf("Enter integers>>");
  scanf("%d", &n);
  max1= n;
  check=n;
  sum=n;
  while(1){
    scanf("%d", &n);
    if(n>0){
    if(max1<n){
      max2=max1;
      max1=n;
    }
    else if(max1>n && max2<n){
      max2=n;
    }
    count++;
    sum+=n;
    }
    else if(n<0) break;
  }
   if(check<0) break;
   else printf("First = %d, second = %d, average = %.2f\n", max1, max2, (float)sum/count);
}
  return 0;
}
