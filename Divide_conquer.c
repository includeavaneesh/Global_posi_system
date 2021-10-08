// C code to demonstrate Divide and
// Conquer Algorithm
#include <stdio.h>

int DAC_Max(int a[], int index, int l);

int DAC_Min(int a[], int index, int l);
 
int DAC_Max(int a[], int index, int l)
{

    int max;

    if (index >= l - 2) {

        if (a[index] > a[index + 1])

            return a[index];

        else

            return a[index + 1];

    }
 
    max = DAC_Max(a, index + 1, l);
 

    if (a[index] > max)

        return a[index];

    else

        return max;
}
 
int DAC_Min(int a[], int index, int l)
{

    int min;

    if (index >= l - 2) {

        if (a[index] < a[index + 1])

            return a[index];

        else

            return a[index + 1];

    }

    min = DAC_Min(a, index + 1, l);
 

    if (a[index] < min)

        return a[index];

    else

        return min;
}
 
// Driver Code

int main()
{

    int min, max, N;
 

    // Initializing the array

    int a[7] = { 70, 250, 50, 80, 140, 12, 14 };
 

    // recursion - DAC_Max function called

    max = DAC_Max(a, 0, 7);
 

    // recursion - DAC_Max function called

    min = DAC_Min(a, 0, 7);

    printf("The minimum number in a given array is : %d\n", min);

    printf("The maximum number in a given array is : %d", max);

    return 0;
}
