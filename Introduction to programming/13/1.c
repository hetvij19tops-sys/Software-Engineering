#include <stdio.h>
int main() {
	int dailysteps[7];
	for(int i=0; i<7; i++) {
		printf("enter your steps:");
		scanf("%d",&dailysteps[i]);
		printf("%d\n",dailysteps[i]);
	}
}