#include <stdio.h>

int main(void){
	
	int n, i, j, x;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		for(j = i; j < n; j++){
			printf(" ");
		}
		for(j = 0; j < 2*i-1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
