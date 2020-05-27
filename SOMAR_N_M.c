#include<stdio.h>
#include<locale.h>

int somar (int valor){
	if(valor !=0){
		return valor + somar(valor-1);
	}
	else {
		return valor;
	}
}


int fat(int n){
	if(n > 1) {
		return n*fat(n - 1);
	}
	else {
		return n;
	}
}


	void main(){
		setlocale(LC_ALL, "Portuguese");
		
		int n, resultado;
		
		
		printf("\n Digite um número inteiro: ");
		scanf("%d", &n);
		
		resultado = somar(n);
		printf("\n Resultado da soma do primeiro número = %d", resultado);
		printf("\n %d!= %d", resultado, fat(resultado));
		
		
		
		printf("\n\n\n Digite outro número inteiro: ");
		scanf("%d", &n);
		
		resultado = somar(n);
		printf("\n Resultado da soma do segundo número = %d", resultado);
		printf("\n %d!= %d", resultado, fat(resultado));		
		

		
		
		
		getchar();
	}
