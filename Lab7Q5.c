#include <stdio.h>
int main() {
    int arr[10], max, min,i;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];
    for(i = 1; i < 10; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Difference (max - min): %d\n", max - min);
    return 0;
}

