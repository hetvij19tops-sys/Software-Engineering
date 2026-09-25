
#include <stdio.h>
int main()
{
    int score,*ptrscore;
    ptrscore=&score;
    *ptrscore=100;
    printf("%d",score);
    
    return 0 ;

    
}