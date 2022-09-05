#include <stdio.h>

int main(){
	
	float sx, h, pi;
	printf("Qual é a sua altura?");
	scanf("%f", &h);
	printf("Qual o seu sexo(1: feminino, 2: masculino)?");
	scanf("%f", &sx);
	
	if (h == 1){
		pi = (62.1 * h)- 44.7;
		printf("Seu peso ideal é %.2f", pi );
	}
	else{
	
		pi = (72.7 * h)-58;
		printf("Seu peso ideal é %.2f", pi);
	}
		
	return 0;
}
