#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// header for use of boolean data type
#include <stdbool.h>
// function for random number generator
int setRandomNumber100(){
    // use current time as seed for
    // random generator
      srand(time(NULL));
    // rand() to generate random number 
    int getRandomNumber = rand() % 100 + 1;
    return getRandomNumber;
}

int main(){

    printf("Number guessing Game!!!\nYou have to guess number from 1 to 100\n********************************\n");
    
    printf("Enter number of terms you want to attempt! \n");
    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size], count = 0;
    for( int i=0; i<arr_size; i++)
    {
        count = count + 1;
        printf("Attempt number %d\n", i + 1);
        scanf("%d", &arr[i]);
        if( setRandomNumber100() == arr[i])
            {
                printf("Congratulations!, you correctly guess the number! \n");
                printf("No. Of attempt you use = %d\n", count);
                break;
            }
         else
             {
                 printf("Sorry!, Better luck next time! \n");
             }  
             
    }
    
    
    return 0;
}