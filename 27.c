/*Imagine a situation where two values need to be swapped within a banking system,
such as updating balances between two accounts after a transaction. Make use of
pointer as function arguments for swapping function.*/
#include <stdio.h>
void swap(double* , double*);
void swap(double* a,double* b)
{
    double t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    double a,b;
    double *t,*u;
    printf("Enter balance of 2 accounts to be swaped:");
    scanf("%lf %lf",&a,&b);
    t=&a;
    u=&b;
    swap(t,u);
    printf("Balance after swaping are: %.2lf %.2lf",a,b);
    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");
    return 0;
}