#include <stdio.h>
#include <ctype.h>

int count(char name[]){
    printf(" %c",toupper(name[0]));
    
    for(int i=0;name[i] !='\0';i++) {
        if(name[i]==' '){
        printf("%c",toupper(name[i+1]));
        break;
            
        }
        
    }
}

int main()
{
    char name[100];
    printf("enter your full name:");
    fgets(name,sizeof(name),stdin);
    printf("initials:");
    count(name);


    return 0;
}