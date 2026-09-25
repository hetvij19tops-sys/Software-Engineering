

#include <stdio.h>
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
    
}
int main()
{
    int player1=12;
    int player2=19;
    swap(&player1,&player2);
    printf("%d %d",player1,player2);
    
    return 0 ;

    
}