// Print A to Z using asterisk pattern
#include <stdio.h>
int main() {
    int i, j;
    int n = 7; // Height of the letters

    // Print letter A

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((j == n / 2 - i || j == n / 2 + i) && i <= n / 2) // Upper part
                printf("*");
            else if (i == n / 2 && j > n / 2 - i && j < n / 2 + i) // Middle line
                printf("*");
            else if (i > n / 2 && (j == 0 || j == n - 1)){ // Lower part
                printf("*");
            }
            else
                printf(" ");
        }
        printf("   "); // Space between letters

        // Print letter B

        for (j = 0; j < n; j++) {
            if (j == 0 || (i == 0 || i == n / 2 || i == n - 1) && j < n - 1 || 
            (j == n - 1 && (i > 0 && i < n / 2)) || 
            (j == n - 1 && (i > n / 2 && i < n - 1)))
                printf("*");
            else
                printf(" ");
        }
        printf("   "); // Space between letters

        // Print letter C

        for (j = 0; j < n; j++) {
            if (j == 0 || (i == 0 || i == n - 1) && j > 0)
                printf("*");
            else
                printf(" ");
        }
        printf("   "); // Space between letters

        // print letter D
        
        for (j = 0; j < n; j++) {
            if (j == 0 || (i == 0 || i == n - 1) && j < n - 1 || 
            (j == n - 1 && (i > 0 && i < n - 1)))
                printf("*");
            else
                printf(" ");
        }
        printf("   "); // Space between letters

        // print letter E

        for (j = 0; j < n; j++) {
            if (j == 0 || (i == 0 || i == n / 2 || i == n - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("   "); // Space between letters

        // print letter F

        for (j = 0; j < n; j++) {
            if (j == 0 || (i == 0 || i == n / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("   "); // Space between letters

        // print letter G

        for (j = 0; j < n; j++) {
            if (j == 0 || (i == 0 || i == n - 1) && j > 0 || 
            (j == n - 1 && i >= n / 2) || 
            (i == n / 2 && j >= n / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("   "); // Space between letters

        // print letter H

        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == n / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("   ");// Space between letters

        // print letter I

        for(j = 0; j < n; j++){
            if ((i == 0 || i == 6) || (i > 0 && i < 6)  && (j == 3)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("   ");// Space between letters

        // print letter J

        for (j = 0; j < 11; j++){
            if ((i == 0) && (j > 1 && j < 11) // Upper Part
            || (i > 0 && i < 6)  && (j == 6) // Middle Part
            || (i == 6) && (j > 0 && j < 6) || (i == 4 || i == 5) && (j == 0))// Lower Part
            {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        
         printf("   ");// Space between letters
         
         // print letter K
        
        for (j = 0; j < n; j++){
            if ((j == 0) || (i == 0 && j == 5) || (i == 1 && j == 4)||(i == 2 && j == 3) || 
            (i == 3 && j == 2) || (i == 4 && j == 3) || (i == 5 && j == 4) || (i == 6 && j == 5)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        
        printf("   ");// Space between letters
        
        // print latter L
        
        for (j = 0; j < n; j++){
            if ((j == 0) || (i == 6 && j < n)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        
        printf("   ");// Space between letters
        
        // print letter M
        
        for (j = 0; j < 13; j++){
            if ((j == 0) || (j == 12) || (i == 1 && (j == 2 || j == 10)) || 
            (i == 2 && (j == 4 || j == 8)) || (i == 3 && j == 6))
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // print letter N
        
        for (j = 0; j < 13; j++){
            if (j == 0 || j == 12)
                printf("*");
            else if (j == 2 * i)
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // print letter O
        
         for (j = 0; j < n + 2; j++){
            if (((i == 0 || i == 6) && (j > 1 && j < n)) || (i > 0 && i < 6) && (j == 0 || j == (n + 1)))
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // print letter P
        
        for (j = 0; j < n; j++){
            if (j == 0 || (i == 0 ||i == 3) && ( j > 1 && j < 5) || (i == 1 || i == 2) && (j == 6))
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter Q
        
        for (j = 0; j < n + 2; j++){
            if (((i == 0) && (j > 1 && j < 7)) || ((i == 6) && (j > 1 && j < 6)) || 
            (i > 0 && i < 6) && (j == 0) || (j == 8 && (i > 0 && i < 5 )))
                printf("*");
            else if ((i == 4 && j == 4) || (i == 5 && j == 6) || (i == 6 && j == 8))
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter R
        
        for (j = 0; j < n; j++){
            if (j == 0 || (i == 0 ||i == 3) && ( j > 1 && j < 5) || (i == 1 || i == 2) && (j == 6) 
            || (i == 4 && j == 2) || (i == 5 && j == 4) || (i == 6 && j == 6))
                printf("*");
            else 
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter S
        
        for (j = 0; j < n; j++) {
            if ((i == 0 && j > 0) || (i == 3 && (j > 0 && j < 6)) || (i == 6 && j < 6) 
            || ((i == 1 || i == 2) && j == 0) || ((i == 4 || i == 5) && j == 6))
                printf("*");
            else
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Peint letter T
        
        for (j = 0; j < n; j++) {
            if (i == 0 || j == n/2)
                printf("*");
            else
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print leter U
        
        for (j = 0; j < n + 2; j++) {
            if ((j == 0 || j == 8) && (i < 6) || (i == 6 && (j > 1 && j < 7)))
                printf("*");
            else
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter V 
        
        for (j = 0; j < 13; j++) {
            if ((i == j) || (i == 0 && j == 12) || (i == 1 && j == 11) | (i == 2 && j == 10) 
            || (i == 3 && j == 9) || (i == 4 && j == 8) || (i == 5 && j == 7))
                printf("*");
            else
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter W 
        
        for (j = 0; j < 13; j++) {
            if ((j == 0 || j == 12) || (i == 5 && (j == 2 || j == 10)) 
            || (i == 4 && (j == 4 || j == 8)) || (i == 3 && j == 6))
                printf("*");
            else
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter X
        
        for (j = 0; j < n; j++) {
            if ((j == i) || (i == 0 && j == 6) || (i == 1 && j == 5) || (i == 2 && j == 4) 
            || (i == 4 && j == 2) || (i == 5 && j == 1) || (i == 6 && j == 0)) 
                printf("*");
            else
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter Y
        
        for (j = 0; j < n; j++) {
            if ((i <= 3 && j == i) || (i == 0 && j == 6) || (i == 1 && j == 5) || 
            (i == 2 && j == 4) || ( i > 3 && j == 3)) 
                printf("*");
            else
                printf(" ");
        }
        
        printf("   ");// Space between letters
        
        // Print letter Z

          for (j = 0; j < n; j++) {
            if ((i == 0 || i == 6) || (i == 1 && j == 5) || (i == 2 && j == 4) 
            || (i == 3 && j == 3) || (i == 4 && j == 2) 
        || (i == 5 && j == 1)) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}