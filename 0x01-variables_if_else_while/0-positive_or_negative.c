#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* print random number */
  /* if n greater than 0 */
  if(n>0) {
    printf("%d is positive\n", n);
  }
  /* if n is equal to 0 */
  else if(n==0) {
    printf("%d is zero\n", n);
  }
    else {
    printf("%d is negative\n", n);
       }
  return (0);
}



