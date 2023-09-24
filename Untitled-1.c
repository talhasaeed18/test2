#include<stdio.h>
int product(int a, int b);
int main()
{
    int n1, n2, product1;
    printf("enter values:");
    scanf("%d %d", &n1,&n2);
    product1= product(n1 ,n2 );
    printf("%d",product1);
    return 0;
    
}
int product(int a, int b)
{
    int result;
    result= a * b;
    return result;
}
