#include <stdio.h>
//questao 1 escreva uma fun��o que recebe um numero como par�metro e retorne o dobro do numero recebido//

//come�a com a fun��o,recebe um numero com parametro //

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
	d = dobro(n); // chamando a fun��o//
	printf("%d\n", d);
	printf("%d", dobro(10)); //posso mostrar o valor, ou eu posso chamar o valor assim:  dobro(10)//
	
	
	return 0;
}	

