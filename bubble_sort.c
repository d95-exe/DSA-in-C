#include "stdio.h"
#define max 20

//start with i=0
//if arr[i] > arr[i+1], swap them.
//else i++ and go to step 2.
//outer loop works for the entire array
//inner loop iteratively sort the REMAINING unsorted section after each pass.
//
//whatever you're stressing about right now,
//it's not as much of a deal as you're making it out to be.
//give the problem time. and give yourself a break :)

int size = 0;
int temp, arr[max];
void bubble_sort(int arr[]){for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
        if(arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
        }
    }


    printf("\nSorted array: \n[ ");
    for(int i = 0; i < size; i++){
        printf("%d, ", arr[i]);
    }
    printf("\b\b ]");
}

int main() {
    printf("\n*********BUBBLE SORT*********\nEnter elements of your array one by one.\nEnter 0 to end the array.\n");
    for(int i=0; i<max; i++){
        printf("\nElement #%d:", i+1);
        scanf("%d", &temp);
        if (temp != 0){
            arr[i] = temp;
            size++;
        }else{
            break;
        }
    }
    bubble_sort(arr);
}