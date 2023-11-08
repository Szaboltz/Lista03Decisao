#include <stdio.h>

void q1() {
	char sentence[] = "Teste123";
	int lowerCase = 0, upperCase = 0, numbers = 0, length = 0;
	int x;
	
	for(x = 0; sentence[x] != '\0'; x++) {
		if (sentence[x] >= 'a' && sentence[x] <= 'z') {
			lowerCase++;
		} else if (sentence[x] >= 'A' && sentence[x] <= 'Z') {
			upperCase++;
		} else if (sentence[x] >= '0' && sentence[x] <= '9') {
			numbers++;
		}
		
		length++;
		
	}
	
	printf("A quantidade de letras minusculas e: %d\nA quantidade de letras maiusculas e: %d\nA quantidade de numeros e: %d\nTamanho do texto e: %d", lowerCase, upperCase, numbers, length);
	
}

void q2() {
	int num, x, j, brakeLine = 0;
	
	printf("Entre com um numero: ");
	scanf("%d", &num);
	
	while (num >= 0) {
		for (x = num; x > 0; x--) {
			printf("%d", x);
		}
		for (x = 0; x <= num; x++) {
			printf("%d", x);
		} 
		
		brakeLine++;
		num--;
		
		if (brakeLine > 0) {
			printf("\n");
			for (j = 1; j <= brakeLine; j++) {
				printf(" ");
			}
		}
		
	}
}

int main() {
	//q1();
	//q2();
}
