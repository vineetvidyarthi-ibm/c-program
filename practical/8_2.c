#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {

        // V
        for(j = 1; j <= 5; j++) {
            if((j == 1 || j == 5) && i < 4)
                printf("*");
            else if((i == 4 && j == 2) || (i == 4 && j == 4))
                printf("*");
            else if(i == 5 && j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // I
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // N
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == j)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // E
        for(j = 1; j <= 5; j++) {
            if(j == 1 || i == 1 || i == 3 || i == 5)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // E
        for(j = 1; j <= 5; j++) {
            if(j == 1 || i == 1 || i == 3 || i == 5)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // T
        for(j = 1; j <= 5; j++) {
            if(i == 1 || j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    printf("\n");

    // ===== VIDYARTHI =====
    for(i = 1; i <= 5; i++) {

        // V
        for(j = 1; j <= 5; j++) {
            if((j == 1 || j == 5) && i < 4)
                printf("*");
            else if((i == 4 && j == 2) || (i == 4 && j == 4))
                printf("*");
            else if(i == 5 && j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // I
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // D
        for(j = 1; j <= 5; j++) {
            if(j == 1 || (j == 5 && i != 1 && i != 5) || i == 1 || i == 5)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // Y
        for(j = 1; j <= 5; j++) {
            if((i == j && i <= 3) || (i + j == 6 && i <= 3) || (j == 3 && i > 3))
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // A
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // R
        for(j = 1; j <= 5; j++) {
            if(j == 1 || i == 1 || i == 3 || (j == 5 && i <= 3) || (i == j && i > 3))
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // T
        for(j = 1; j <= 5; j++) {
            if(i == 1 || j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // H
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // I
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}