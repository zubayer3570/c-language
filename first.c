#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
   double x = 29.34996044;
   double y = -11.2344775e3;
   printf("%.3f %12.3E %.0e %f \n", x, x, y, ceil(y));

}