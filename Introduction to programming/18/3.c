

#include <stdio.h>
void printArray(int *arr, int size) {
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
}
int main()
{
    int player1[5]={12,45,74,12,30};
    printArray(player1,5);
    
    
    return 0 ;

    
}