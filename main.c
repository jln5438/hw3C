#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n){
if(n%10==n){
  return n;
}
else{
  return digit_sum(n/10)+n%10;
}
}

int main(void) {
  int n=atoi(readline("Enter an int: "));
  int total=digit_sum(n);
  printf("sum of digits of %d is %d.",n,total);
}