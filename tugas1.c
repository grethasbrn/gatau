#include <stdio.h>

int main() {
	int a;
	
	printf(" masukkan nilai a: ");
	scanf("%d", &a);
	switch(a) {
		case 1:
			printf("1");
			break;
		case 2:
			printf("2");
			break;
		case 3:
			printf("3");
			break;
		case 4:
			printf("gatau");
	}
}