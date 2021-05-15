#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char** argsv){
    if(argc != 2){
        return EXIT_FAILURE;
    } 

    int x = atoi(argsv[1]);
    
    if(strcmp(argsv[1], "0") != 0 && x == 0){
        return EXIT_FAILURE;
    } 
    
    int revertedNumber = 0;

    if(x < 0){ 
        printf("Negative numbers are not palindromes.\n");
        return EXIT_SUCCESS;
    }
    while(x > revertedNumber){ // divide number into "halves", one of which has inversed digits
        revertedNumber = revertedNumber * 10 + x % 10; // the inverted half
        x /= 10; // remainder
    }
    if(x == revertedNumber || x == revertedNumber/10){
        printf("It is a palindrome.\n"); // also deals with the case in which the number of digits is not even
    }
    else{
        printf("It is NOT a palindrome!\n");
    } 

    return EXIT_SUCCESS;
}
