#include <stdio.h>

int main(){
	int par, nuns, n1;
	n1 = 1;
	while ( n1 != 0){
		printf("digite um numero:");
		scanf("%d", &n1);
		if (n1 == 0){
			n1 = 0;
		}
		else{
			if (n1 % 2 == 0)
				par += 1;
		}
		if (n1 != 0)
			nuns += 1;
	
	}
	nuns -= 1;
	printf("existem %i numeros pares\n", par);
	printf("voce digitou %i numeros", nuns);
	return 0;
}
