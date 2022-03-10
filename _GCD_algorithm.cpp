#include<stdio.h>

int func_1(int a, int b){
  //a should be larger than b
  int gcd = 1;
  for(int i =0;i<b; i++){
    if(a%i ==0 && b%i ==0) gcd = i;
  }
  return gcd;
}
int func_2(int a, int b){
 int gcd = 1;
 for(int i =b; i>=1; i--){
  if(a%i == 0 && b%i == 0) return i;
 }
 return -1;
}
int main(void){
  int a, b;
  
  pritnf("input two numbers: ");
  scanf("%d %d", &a,&b);
  
  printf("the result of func_1 : %d", func_1(a,b));
  printf("the result of func_2 : %d", func_2(a,b));
  
  
}
