#include <stdio.h>

//string uzunluðunu pointer ile bulma. 5.hafta slayt 26 tam deðil ama bak

int main() {
	
	int i=0;
	int cnt = 0;
	
	char deneme[20];
	
	scanf("%s",deneme);
	
	char *dptr;
	
	dptr = deneme;
	
	for(i; *(dptr+i) != '\0' ; i++ ) {
		
		cnt++;
	}
	
	printf("%d", cnt);
	return 0;
}
