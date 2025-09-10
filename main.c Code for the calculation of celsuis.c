#include <stdio.h>

void convert(int Fahre){
    
    float cel;
    cel = (0.56)*(Fahre - 32);
    printf("The value for Celsius is:=> %f.",cel);
    
}
int main(){
    int Fahre;
    printf("Enter value for Fahrenheit:=>");
    scanf("%d", &Fahre);
    convert(Fahre);
    return 0;
}