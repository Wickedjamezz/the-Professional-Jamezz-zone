//C program that interacts between function and main body of the program
#include <stdio.h>

void Happy (int H[])
{
    int du, Num, total = 0;
    int f[10], c;

    Num = 5;

    for(du = 0, c = 0; du < 10; du++){
         if (H[du] > Num){
             f[c] = H[du];
             total++;
             c++;
         }
    }     
    printf("Number greater than 5 are = %d, they are :=> ", total);

    for(du = 0; du < c; du++){
         printf("%d,",f[du]);
    }

}
int main(){
    int dy, du, H[10];

    printf("Enter first integer number:");
    scanf("%d",&dy);
    printf("Enter second integer number:");
    scanf("%d",&du);
    
    if (dy <= du){
        
        for(du = 0; du < 10; du++){
        printf("Enter values:=>");
        scanf("%d", &H[du]);
        }
    Happy(H);
    }
    else{ 
        printf("Code cannot progress...Function of the program is not performed.");
    }
    
    
    return 0;
}
