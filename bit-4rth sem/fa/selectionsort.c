// C program for implementation of selection sort
#include <stdio.h>
void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) //{2,7,4,1,5}
                        
    {
        // min_idx = i;                   
                                       
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_idx]) //
                min_idx = j;
        }
            // Swap the found minimum element with the first element
           temp = arr[i];
           arr[i] = arr[min_idx];
           arr[min_idx] = temp;
    }
}
int main()
{
    int arr[] = {2,7,4,1,5};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
