/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n=0,a=0;
    printf("enter number");
    scanf("%d",&n);
  while(n != -1){

    a=a+n;
    n--;
  }
  printf("sum is : %d",a);
  return 0;
}

