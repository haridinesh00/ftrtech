#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_double(); /* 0.0 to 1.0, unif. dist. */
int main() {
   int i;
   double x,y,z;
   srand((long)time(NULL)); /* initialize rand() */
   printf("RAND_MAX: %i\n",  RAND_MAX);
   for (i = 0; i < 10; i++)
   {
x=rand_double();
y=rand_double(); 
z=((x*x)+(y*y));
if(z<1)
{
printf("(%lf,%lf):     ",x,y);
printf("%lf\n",z);
}
}
   }

double rand_double() {
   return rand()/(double)(RAND_MAX);
}


