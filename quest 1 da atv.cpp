#include <stdio.h>
//questao 1 escreva uma função que recebe um numero como parâmetro e retorne o dobro do numero recebido//

//começa com a função,recebe um numero com parametro //

int dobro(int num){
	int d;
	d = 2 * num; //calculando o dobro//
	return d; // retorne o dobro//
}
//bloco main//
int main(){
	int n, d; //d foi criada para receber o dobro, poderia ser chamada de qualquer outro nome//
	printf("Digite o numero: ");
	scanf("%d",&n);
	d = dobro(n); // chamando a função//
	printf("%d\n", d);
	printf("%d", dobro(10)); //posso mostrar o valor, ou eu posso chamar o valor assim:  dobro(10)//
	
	
	return 0;
}	

