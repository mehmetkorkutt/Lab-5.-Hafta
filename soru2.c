#include <stdio.h>

int main() {
	
	int s1,s2,toplam;
	int *p1,*p2;
	p1 = &s1;
	p2 = &s2;

	printf("sayi gir:");
	
	scanf("%d",s1);
	scanf("%d",s2);
	
	toplam = *p1+*p2;
	
	printf("Toplam: %d",toplam);
	
	return 0;
}
