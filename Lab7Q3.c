#include <stdio.h>

int main() {
    int i,pass[10], fail[10];
    int pCount = 0, fCount = 0, mark;
    float passTotal = 0, failTotal = 0;

    printf("Enter marks for up to 10 students (-1 to stop):\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &mark);

        if (mark == -1)
            break;

        if (mark >= 5 && mark <= 10) {
            pass[pCount] = mark;
            passTotal += mark;
            pCount++;
        } else if (mark >= 0 && mark < 5) {
            fail[fCount] = mark;
            failTotal += mark;
            fCount++;
        } else {
            printf("Invalid mark. Please enter a value between 0 and 10 or -1 to stop.\n");
            i--; 
        }
    }
    printf("\nPass Marks: ");
    if (pCount > 0) {
        for (i = 0; i < pCount; i++)
            printf("%d ", pass[i]);
        printf("\nAverage Pass Marks: %.2f\n", passTotal / pCount);
    } else {
        printf("None\nAverage Pass Marks: 0.00\n");
    }
    printf("\nFail Marks: ");
    if (fCount > 0) {
        for (i = 0; i < fCount; i++)
            printf("%d ", fail[i]);
        printf("\nAverage Fail Marks: %.2f\n", failTotal / fCount);
    } else {
        printf("None\nAverage Fail Marks: 0.00\n");
    }
    return 0;
}


