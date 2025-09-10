//C program to enter integer number from the user
#include <stdio.h>

int main()
{
    int age;
    
    printf("Enter any age number:=>");
    scanf("%d", &age);
    
    while(age > 0){
        
        if (age < 18){
            printf("\nYou are a Child.");
        }
        else if ((age >= 18) && (age <= 65)){
            printf("\nYou are an Adult.");
        }
        else if(age > 65){
            printf("\nYou are Old.");
        }
        else if (age < 0){
        printf("You have entered a negative/ wrong age.");
        break;
        }
        printf("\nEnter any age number:=>");
        scanf("%d", &age);
    }
    return 0;
}