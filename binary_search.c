#include "stdio.h"
#define MAX 20

//1     start = beg+end/2
//2     if start == target, end
//3     if target > start, start = beg+1
//4     if target < start, start = 0, end = beg-1
//5     go to 1
//6     end

int arr[MAX], target, size;

void binary_search(int x){
    int beg = 0, end = size-1;
    int ispresent = 0;
    while(beg <= end){
        int start = (beg + end) / 2;
        if(arr[start] == x){
            printf("\nTarget located at index %d", start);
            ispresent = 1;
            break;
        }
        else if(arr[start] < x){
            beg = start + 1;
        }
        else{
            end = start - 1;
        }
    }
    if(!ispresent){
        printf("\nTarget not found in array");
    }
}
int main(){
    printf("\nBINARY SEARCH\nEnter the elements of your array (enter 0 to end array)\n");
    int temp;
    for(int i=0; i<MAX; i++){
        printf("Element #%d:", i+1);
        scanf("%d", &temp);
        if(temp != 0){
           arr[i] = temp;
           size++;
        }else{
            break;
        }
    }
    printf("\nEnter the target element: ");
    scanf("%d", &target);
    binary_search(target);
}