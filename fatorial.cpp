#include <stdio.h>

int fatorial(int n1){
	int i;
	i = n1 - 1;
	while (i > 0){
		n1 = n1*i;
		i -= 1;
	}
	return n1;
}

int main(){
	int n1, res;
	printf("Digite um número para fatorial:");
	scanf("%d", &n1);
	res = fatorial(n1);
	printf("A fatorial desse numero e: %d", res);
	return 0;
}
