#include <stdio.h>
// quest 2 escreva uma função que recebe dois numeros como parametros e retorna o dobro do maior dos numeros recebidos//

int dobro(int num1, int num2, int maior, int dobro){
	if(num1 > num2){
		
		maior = num1;
		
	}else {
		maior = num2;
	}
	
	dobro = 2 * maior;
	
	return dobro;
}
 int main(){

	int n1, n2, maior, d; //maior foi criada para receber o dobro, poderia ser chamada de qualquer outro nome//
	printf("Digite o numero: ");
	scanf("%d",&n1);
	
	printf("Digite o numero: ");
	scanf("%d",&n2);
	
	d = dobro(n1,n2); // chamando a função//
	
	printf("%d\n", n1, n2);
	printf("O maior é: %d",d);
 	return maior;
 }
