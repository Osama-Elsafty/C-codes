#include <stdio.h>
//count down counter
void r(int num)
{
if(num) // will leave if the num equals zero
{
printf("%d ",num-- );
r(num);
}
}
void main()
{
r(5);
}
