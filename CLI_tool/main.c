#include <stdio.h>

// ./CLI_tool < data.txt > result.txt

void readInput() {
}

void bubbleSort(int *data, int n) {
    // printf("size of array: %d\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i] > data[j]) {
                int tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
}

int main ()
{
    printf("Hello CLI tool. I'm sorting your data now :)\n");
    int data[] = { 3, 6, 1, 8, 8, -3, 0, 7 };
    int n = sizeof(data) / 4;
    bubbleSort(data, n);
    printf("Result: [");
    for (int i = 0; i < n; i++) {
        printf(" %d", data[i]);
        if (i != n-1) {
            printf(",");
        }
    }
    printf(" ]\n");
    return 0;
}
