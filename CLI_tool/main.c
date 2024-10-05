#include <stdio.h>
#include <string.h>

// ./CLI_tool < data.txt > result.txt

void readInput() {
    char input[100]; 
    char buff[5];
    int buff_i = 0;
    scanf("%s", input);
    for(int i = 0; i < 100; i++)
    {
        char c = input[i];
        printf("c: %c\n", c);
        if (c == '\0')
        {
            break;
        }
        else if(c == ',')
        {
            buff_i = 0;
           // memset(&buff[0], 0, sizeof(buff));
            int number;
            sscanf(buff, "%d", &number);
            printf("num: %d\n", number);
        }
        else
        {
            buff[buff_i++] = c;
        }
        
    }
    printf("input: %s\n", input);
}

void bubbleSort(int *data, int n) {
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

void printResult(int *data, int n)
{
    printf("Result: [");
    for (int i = 0; i < n; i++) {
        printf(" %d", data[i]);
        if (i != n-1) {
            printf(",");
        }
    }
    printf(" ]\n");

}

int main ()
{
    printf("Hello CLI tool. I'm sorting your data now :)\n");
    int data[] = { 3, 6, 1, 8, 8, -3, 0, 7 };
    int n = sizeof(data) / 4;
    bubbleSort(data, n);
    // printResult(data, n);
    readInput();
    return 0;
}
