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
  printf("%d", n);
  /* if n greater than 0 */
  if(n>0) {
    printf("is positive\n");
  }

  /* if n is equal to 0 */
  else if(n==0) {
    printf("is zero\n");
           }
  else {
    printf("is negative\n");
       }
  return (0);
}



