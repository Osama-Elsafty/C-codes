#include<stdio.h>
//this program shows that an array is just a multiple blocks of memory next to each other, array name is the pointer to the first of them
int main()
{
//Assuming the following variable definitions
int a[3]={3,8,11};
int *b=a;
//Use of ++ and --
b++; // points at 8
b--; // now points at 3
//Use of + to add an int to a pointer:
printf("%d \n", *(b + 2)); //This statement will print 11
//Use of +=:
b = a; // points at 3
b += 2; // points at 11
//Pointer subtraction:
b += 2;
printf("%d \n", (b-a)); //this will print 4
return 0;
}
