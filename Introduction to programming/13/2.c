#include <stdio.h>
int main() {
	int Spotify[7],total=0, avg;
	for(int i=0; i<7; i++) {
		printf("enter mins:");
		scanf("%d",&Spotify[i]);
		total=total+Spotify[i];

	}
    printf("%d\n",total);
    avg=total/7;
    printf("%d\n",avg);

}