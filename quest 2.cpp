//escreva uma função que recebe dois números como parâmetros
// e retorna o dobro do maior dos números recebidos.

#include <stdio.h>

int maior(int num1, int num2){
	int d;
	if(num1>num2){
		d = 2 * num1;
	} else{
		d = 2 * num2;
	}
	
	return d;
}

int main(){
	
	int n1, n2, d;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	
	d = maior(n1, n2);
	
	printf("O dobro do maior número é: %d\n", d);
	
	return 0;
}


