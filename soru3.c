// n elemanlý array oluþturup kullanýcýdan al. pointer ile yazdýr.

#include <stdio.h>

int main() {
	
int array[10];
int *aptr;
aptr = array;

int i=0,j=0;

printf("Diziyi doldur...\n");

for(i=0 ;i < 10; i++) {
	scanf("%d",&array[i]);
}	
	
for(j=0; j < 10; j++) {
	printf("%d\n",*(aptr+j));
}
	
	return 0;
}
