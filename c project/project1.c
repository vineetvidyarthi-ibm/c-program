#include <stdio.h>

int main() {
    int students, subjects;
    
    printf("Enter number of students: ");
    scanf("%d", &students);
    
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    int marks[students][subjects];
    int total[students];
    float percent[students];

    // Input marks
    for(int i = 0; i < students; i++) {
        total[i] = 0;
        printf("\nEnter marks for Student %d:\n", i + 1);
        for(int j = 0; j < subjects; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        percent[i] = (float)total[i] / subjects;
    }

    // Display marksheet
    printf("\n--- MARKSHEET ---\n");
    for(int i = 0; i < students; i++) {
        printf("\nStudent %d\n", i + 1);
        for(int j = 0; j < subjects; j++) {
            printf("Subject %d: %d\n", j + 1, marks[i][j]);
        }
        printf("Total: %d\n", total[i]);
        printf("Percentage: %.2f%%\n", percent[i]);
    }

    // Rank calculation
    int rank[students];
    for(int i = 0; i < students; i++) {
        rank[i] = 1;
        for(int j = 0; j < students; j++) {
            if(total[j] > total[i]) {
                rank[i]++;
            }
        }
    }

    printf("\n--- CLASS RANK LIST ---\n");
    for(int i = 1; i <= students; i++) {
        for(int j = 0; j < students; j++) {
            if(rank[j] == i) {
                printf("Rank %d: Student %d (Total = %d)\n", i, j + 1, total[j]);
            }
        }
    }

    // Subject topper
    printf("\n--- SUBJECT TOPPERS ---\n");
    for(int j = 0; j < subjects; j++) {
        int max = marks[0][j];
        int topper = 0;
        for(int i = 1; i < students; i++) {
            if(marks[i][j] > max) {
                max = marks[i][j];
                topper = i;
            }
        }
        printf("Subject %d Topper: Student %d (Marks = %d)\n",
               j + 1, topper + 1, max);
    }

    return 0;
}
