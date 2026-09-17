#include <stdio.h>
int main()
{
    printf("post increment:\n");
    int a=3, b= a++; 
    printf("%d\n%d\n",a,b);
    printf("pre-increment:\n");
    int c=6,d=++c; 
    printf("%d\n%d",c,d);
    return 0;

}
