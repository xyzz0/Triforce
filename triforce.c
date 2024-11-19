// Made by xyzz0
// https://www.github.com/xyzz0/Triforce

#include <stdio.h>

int main(){
    // User input
    int height;

    printf("Triforce size: ");
    scanf("%d", &height);
    printf("\n");

    // Validate Input

    if (height < 1 || height > 50){
        printf("Wrong Input, use a number between [1-50]");
    }

    else{
        // First Triangle
        for(int x = 1; x <= height; x++){

            for(int spaces = 1; spaces <= (height - x) + height; spaces++){
                printf(" ");
            }

            // Triangle
            for(int y = 1; y <= (2 * x - 1); y++){
                printf("*");
            }

            printf("\n");
        }

        // Second Part
        for(int x = 1; x <= height; x++){
            // 1rst Triangle Block
            // Spaces
            for(int spaces = 1; spaces <= height - x; spaces++){
                printf(" ");
            }

            // Triangle
            for(int y = 1; y <= (2 * x - 1); y++){
                printf("*");
            }

            // 2nd Triangle Block
            // Spaces
            for(int spaces = 1; spaces <= height*2 - x*2 + 1; spaces++){
                printf(" ");
            }

            // Triangle
            for(int y = 1; y <= (2 * x - 1); y++){
                printf("*");
            }

            printf("\n");
        }
    }
}
