#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ./CLI_tool < data.txt > result.txt


typedef struct{
    int count;
    int data[100];
}record;


record readInput() {
    char input[100]; 
    char buff[5];
    int buff_i = 0;
    record total;  
    scanf("%s", input);

    // going through char array and converting to int array
    for(int i = 0; i < 100; i++){
        char c = input[i];
        if (c == '\0')
        {
            //save the last number to int array and break 
            int number;
            sscanf(buff, "%d", &number);
            total.data[total.count] = number;
            break;
        }
        else if(c == ',')
        {
            //convert char buff (array of digits) to a single number 
            int number;
            sscanf(buff, "%d", &number);
            total.data[total.count] = number;
            //resetting buff - probably can be in one line
            for (int k = 0; k < buff_i; k++)
            {
                buff[k] = '\0';
            }
            buff_i = 0;
            total.count++;
        }
        else
        {
            buff[buff_i++] = c;
        }
        
    }
    return total;       //returns both data and number of elements
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

int max(int a,int b,int c){
     if (a >= b) {
        if (a >= c)
            return a;
        else
            return c;
    }
    else {
        if (b >= c)
            return b;
        else
            return c;
    }
}

void swap(int a,int b){
    int tmp = a;
    a = b;
    b = tmp;
}

void quicksort(int* data, int n, int left, int right){
    int N = n;
    int pivot = data[n/2];
    int l = left;
    int r = right;

    while(l < r){
        printf("pivot = %d\n", pivot);
        while(data[l] <= pivot && l <= n -1){
            l++;
        }
        while(data[r] > pivot && r >= N){
            r--;
        }
        if(l < r){
            swap(data[l], data[r]);
        }
    } 
    swap(&data[right], &data[r]);
    quicksort(data, n, right, r-1);
    quicksort(data, N-n, r+1, left);
}

int cmp (void const* a, void const* b){
    return (*(int*)a - *(int*)b);
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
    record total = readInput();
    int n = total.count +1; //count starts from 0
    int* data = malloc(sizeof(int)*n); 
    data = total.data;

    //bubbleSort(data, n);
    quicksort(data,n);
    //qsort(data, n, sizeof(int), cmp);
    printResult(data, n);
    return 0;
}
