// CSC 250
// student template

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findMin(int arr[], int size);
int findMax(int arr[], int size);
int findSum(int arr[], int size);
int findAvg(int arr[], int size);

int main()
{

    int size;
    int index;
    int min, max, sum, avg;
    int i;
    srand(time(NULL));

    // Ask user for integer array size
    printf("Enter an integer: ");
    scanf("%d", &size);

    int arr[size];

    // Loop for rand nums and store in array
    for (i = 0; i < size; i++)
    {
        arr[i] = rand() % 1001;
    }

    // Function calls
    index = findMax(arr, size);
    max = arr[index];
    printf("max:    %3d pos:  %5d\n", max, index);

    index = findMin(arr, size);
    min = arr[index];
    printf("min:    %3d pos:  %5d\n", min, index);

    avg = findAvg(arr, size);
    printf("avg:    %3d\n", avg);

    sum = findSum(arr, size);
    printf("sum:  %3d\n\n", sum);

    printf(" Pos  :   Val\n");
    printf("-------------\n");

    // Loop through array and print the values and indexes
    for (i = 0; i < size; i++)
    {
        printf("%4d  : %5d\n", i, arr[i]);
    }

    return 0;
}

int findMin(int arr[], int size)
{
    int i, minimum, pos;
    minimum = arr[0];
    pos = 0;

    // Loop through array
    for (i = 0; i < size; i++)
    {
        if (arr[i] < minimum) // if value i is less than current minimum
        {

            minimum = arr[i]; // store new minimum value
            pos = i;          // update the index position
        }
    }

    return pos;
}

int findMax(int arr[], int size)
{
    int i, maximum, index;
    maximum = arr[0];
    index = 0;

    // Loop through array
    for (i = 0; i < size; i++)
    {
        if (maximum < arr[i]) // if value i is greater than current max value
        {
            maximum = arr[i]; // store new max value
            index = i;        // update the index position
        }
    }

    return index;
}

int findSum(int arr[], int size)
{
    int i;
    int sum = 0;

    // Loop through array
    for (i = 0; i < size; i++)
    {
        sum += arr[i]; // add all values
    }

    return sum;
}

int findAvg(int arr[], int size)
{
    int i;
    int avg, sum = 0;

    // Loop through array
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
        avg = sum / size; // compute the avg
    }

    return avg;
}