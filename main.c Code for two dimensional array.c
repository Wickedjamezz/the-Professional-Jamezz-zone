//program that defines integers using two dimensional arrays.
#include <stdio.h>
#include <conio.h>

int main (){
    
    int arr[5][3];
    int sum = 0;
    float avg;
    int cout1 = 0, cout2 = 0, cout3 = 0;
    int minarr;
    
    printf("Please enter any 15 integer digits:=> ");
    for (int w = 0; w < 5; w++){
       
        for (int t = 0; t <3; t++)
        scanf("%d,", &arr[w][t]);
    }
    printf("The array digits entered are:=> ");
    for (int w = 0; w < 5; w++){
       
        for (int t = 0; t <3; t++)
        printf("%d,", arr[w][t]);
    }
    for(int w = 0; w < 5; w++){
        
       for(int t = 0;t < 3; t++)
       sum += arr[w][t];
    }
    avg = sum / 15.0;
    printf("\nThe average of the array digit is:=> %f.",avg);
    printf("\nThe negative digits inside the array are:=> ");
    minarr = arr[0][0];
    for (int w = 0; w < 5; w++){
        
        for (int t = 0; t < 3; t++){
            
            if (arr[w][t] < 0)
            printf("%d,", arr[w][t]);
            
            if (arr[w][t] < minarr)
            minarr = arr[w][t];
            
            if (arr[w][t] >= 0)
            cout1++;
            
            if (arr[w][t] %2 == 0)
            cout2++;
            
            if (arr[w][t] > avg)
            cout3++;
            
        }
    }
    printf("\nThe minimum array digit is:=> %d.", minarr);
    printf("\nThe number of positive array digit is:=> %d.", cout1);
    printf("\nThe number of even array digit is:=> %d.", cout2);
    printf("\nThe number of array digit greater than the average:=> %d.",cout3);
    
    return 0;
    
    
}
