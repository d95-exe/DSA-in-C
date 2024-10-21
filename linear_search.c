#include "stdio.h"
int main(){
    int size, target, i, location = 0;
    printf("\nLinear search\nEnter the size of your array: ");
    scanf("%d", &size);
    int intake[size];
    printf("\nEnter elements of the array, one by one:\n");
    for(i=0; i<size; i++){
        scanf("%d", &intake[i]);
    }
    printf("\nEnter element to find:\n");
    scanf("%d", &target);
    for(i=0; i<size; i++){
        if(intake[i] == target){
            location = i;
        }
    }
    if(location){
        printf("\nElement found at index %d", location);
    }else{
        printf("\nElement not found.");
    }
}