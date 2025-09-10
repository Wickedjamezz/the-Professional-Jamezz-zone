
#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    c = 2;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    d = b;
    while(c<=a){
        d = d + b;
        c++;
        
    }
    
    printf("multiplication through addition of 2 numbers = %d", d);
    
    return 0;
}
