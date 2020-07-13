#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>

  
  	int nomeeidade(){

	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Descrição : Mostra o nome completo, o ano de nascimento
	// e ainda, em que posição a idade está armazenada na memória
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>


		const int anoAtual = 2020;
		char primeiroNome[50], ultimoSobrenome[50], nomesMeio[100];
		int idade, anoNasc;
	
			printf("Digite seu primeiro nome: ");
				scanf("%s",&primeiroNome);
			
			printf("Digite seu ultimo sobrenome: ");
				scanf("%s",&ultimoSobrenome);
			
			printf("Digite seus sobrenomes do meio: ");
				fflush(stdin);
				fgets(nomesMeio,100, stdin);
			
			int tamanho = strlen(nomesMeio);
			nomesMeio[tamanho-1] = '\0';
			
			printf("Digite sua idade: ");
			scanf("%d",&idade);
			
			anoNasc = anoAtual - idade - 1; //Diminui 1 para considerar que ainda não fez aniversário esse ano
			
			printf("Seu nome: %s %s %s\n",primeiroNome, nomesMeio, ultimoSobrenome);
			printf("Voce nasceu em: %d\n", anoNasc);
			printf("Sua idade esta armazenada na posicao %x", &idade);

}
  
	int mediadecinco(){
		
	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Descrição : Calcula a média, variância e desvio padrão de cinco notas 
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>

	
		float notas[5], media, variancia, desvPd;

		
			printf("\n Digite as cinco notas do aluno: ");
				scanf("%f %f %f %f %f",&notas[0],&notas[1],&notas[2],&notas[3],&notas[4]);
		
			media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;
			variancia = (pow((notas[0] - media),2) + pow((notas[1] - media),2) + pow((notas[2] - media),2) + pow((notas[3] - media),2) + pow((notas[4] - media),2))/5;
			desvPd = sqrt(variancia);
			
			printf("\n\n -----------RESULTADOS-----------");
			printf("\n Media final do aluno = %f",media);
			printf("\n Variancia = %f",variancia);
			printf("\n Desvio padrao = %f",desvPd);
	}


	int jurosdedoismeses() {
		
	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Descrição : Calcula os juros de dois meses
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>
	
		float valor_bruto = 0;
		float taxa_juros = 0;
		float valor_juros = 0;
		float juros_pago = 0;
		
			printf("\n Digite o valor do produto:");
				scanf("%f",&valor_bruto);
			
			printf("\n Digite a taxa de juros em porcentagem: ");
				scanf("%f",&taxa_juros);
				
			taxa_juros = taxa_juros/100 * 2;
			valor_juros = valor_bruto * (1 + taxa_juros);
			juros_pago = taxa_juros * valor_bruto;
			
			printf("\n\n -----------RESULTADOS-----------");
			printf("\n Valor bruto = %f",valor_bruto);
			printf("\n Valor com juros = %f",valor_juros);
			printf("\n Juros pago = %f",juros_pago);
	}
  
	int relogiocomsegundos(){
	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Descrição : Calcula o tempo que se passaram entre dois horários
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>
	
	    int h1, min1, sec1, h2, min2, sec2, h, min, sec;
	
	
	    printf("\nDigite o instante inicial (horas , minutos e segundos): ");
	    	scanf("%d %d %d", &h1, &min1, &sec1);
	
	    printf("\nDigite o instante final (horas , minutos e segundos): ");
	    	scanf("%d %d %d", &h2, &min2, &sec2);
	
		h = h2 - h1;
		min = min2 - min1;
		sec = sec2 - sec1;
	
	        if ((h < 0)  || ((h == 0) && (min < 0)) ||  ((h == 0) && (sec < 0))) {
	            printf("\nDados invalidos! O segundo instante e anterior ao primeiro\n");
	        }
	       	 else {
	            	 if (sec < 0) {
		                min = min - 1;
		                sec = sec + 60;
	            	} else {
						if (min < 0) {
		                h = h - 1;
		                min = min + 60;}
	            }
	
	            printf( "\nEntre os periodos %dh %dmin %dsec e %dh %dmin %dsec passaram-se %dh %dmin %dsec", h1, min1, sec1, h2, min2, sec2, h, min, sec);
	        }
	
	}

	int tabuadajogo(){
	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Descrição : <Aqui você descreve o que o programa faz! (função)>
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>
	    int inicial = 0, contador = 0, respostaUsuario = 0, acerto = 0, resultado = 0;


	    printf("T A B U A D A \n\n");
	    printf("Digite o número para acertar as multiplicações: ");
		    scanf("%d", &inicial);

    // Uso do While obrigatório para a atividade

	    while(contador <= 10) {
		    printf("\nTABUADA DO %d\n\n", inicial);
		    contador = 1;
		    acerto = 0;
	
		    	while(contador <= 10) {
			        printf("%d x %d =", inicial, contador);
			        printf("\n Digite a resposta: ");
						scanf("%d", &respostaUsuario);
	
	       		if(inicial*contador == respostaUsuario){
					acerto = acerto + 1;
					}
				
				contador = contador + 1;
	        }
	
	    }

	    	resultado = (acerto * 100)/ 10;
	
	    	printf("\n Usuário acertou em porcentagem: %d ", resultado);
	
			    if(resultado <= 25){
				    printf("\n\n Resultado do teste foi: MUITO RUIM");
				    }
						else if(resultado <= 50){
			   				printf("\n\n Resultado do teste foi: RUIM");
			   			}
							else if(resultado <= 75){
			    				printf("\n\n Resultado do teste foi: BOM");
			    			}
								else if (resultado >= 75){
			   						 printf("\n\n Resultado do teste foi: MUITO BOM");
			   					}
	
	
	}

  
int meses(){
int valor;
	 printf ("Digite um valor de 1 a 12: ");
	 scanf("%d", &valor);
	 switch ( valor ){
		 case 1 :
		 printf ("Janeiro\n");
		 break;
		 case 2 :
		 printf ("Fevereiro\n");
		 break;
		 case 3 :
		 printf ("Março\n");
		 break;
		 case 4 :
		 printf ("Abril\n");
		 break;
		 case 5 :
		 printf ("Maio\n");
		 break;
		 case 6 :
		 printf ("Junho\n");
		 break;
		 case 7 :
		 printf ("Julho\n");
		 break;
		 case 8 :
		 printf ("Agosto\n");
		 break;
		 case 9 :
		 printf ("Setembro\n");
		 break;
		 case 10 :
		 printf ("Outubro\n");
		 break;
		 case 11 :
		 printf ("Novembro\n");
		 break;
		 case 12 :
		 printf ("Dezembro\n");
		 break;
		 default :
		 printf ("Valor invalido!\n");}
		 
}

int mdc() {
	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Descrição : <Aqui você descreve o que o programa faz! (função)>
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>
        int first_num = 0, sec_num = 0, third_num = 0, rest = 0;

	        printf("Entre com o primeiro numero: ");
	        	scanf("%d", &first_num);
	        	
	        printf("\nEntre com o segundo numero: ");
	        	scanf("%d", &sec_num);
	        	
	        printf("\nEntre com o terceiro numero: ");
	       	 scanf("%d", &third_num);

	        printf("\n\n ---------- MDC - PART 1 ----------");
	
	        do {
	            rest = sec_num % first_num;
	            printf("\nSegundo Numero = %d; Primeiro numero = %d; ", sec_num,first_num);
	            printf("\nresto = %d\n", rest);
	            sec_num = first_num;
	            first_num = rest;
	        } while (first_num > 0);
	
	        printf("\n\n ---------- MDC - PART 2 ----------");
	
	        do{
	            rest = third_num % sec_num;
	            printf("\nTerceiro Numero = %d; MDC ANTERIOR = %d; ",third_num, sec_num);
	            printf("\nresto = %d\n", rest);
	            third_num = sec_num;
	            sec_num = rest;
	        } while ( sec_num > 0);
	
	        printf("\n\n\n ---------- MDC - FINISH ----------");
	
	        printf("\n\n MDC: %d\n\n",third_num);
	
	    }
    
	int xnumbers() {
			// Faculdade Pitágoras – Afonso Pena
		// Disciplina : Algoritmos e Técnicas de Programação
		// Professor : Luiz Mesquita
		// Descrição : <Aqui você descreve o que o programa faz! (função)>
		// Autor(a) : Camila do Nascimento Roque
		// Data atual : <09/06/2020>
		  int numberSelect = 0;
		  int i = 0;
		
		
		  printf("\n Digite quantos números quer sortear: ");
		  scanf("%d", &numberSelect );
		
		  int numero[numberSelect];
		
		  printf("\n\n Os números sorteados foram: \n\n");
			  for (i = 0; i < numberSelect ; i++)
			  {
			    numero[i] = (rand() % 100);
			    printf("%d ", numero[i]);
			  }
		
			printf("\n\n Ordem inversa dos numeros: \n\n");
			  for (i = --numberSelect; i >= 0; --i)
			  {
			    printf("%d ", numero[i]);
			  }
			
			  printf("\n\n");
		
	}

	int matrizinversa() {
	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Descrição : <Aqui você descreve o que o programa faz! (função)>
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>	
		int lin = 0,col = 0, l = 0, c = 0;
	
			printf("Digite o numero de linhas que devera ter a matriz: ");
				scanf("%d",&lin);
		
			printf("Digite o numero de colunas que devera ter a matriz: ");
				scanf("%d",&col);
		
	   int matriz [lin][col];
	
	   // gerando a matriz
	
		   for (l=0; l<lin; l++) {
		
		      for (c=0; c<col; c++) {
		
					printf("\nDigite um valor para a MATRIZ [%d][%d]:",l+1,c+1);
						scanf("%d",&matriz[l][c]);
		
		      }
		
		   }
			printf("\n\n A MATRIZ DIGITADA FOI\n\n");
				for (l=0; l<lin; l++) {
					for(c=0; c<col;c++)	{
						printf("%3.d\t",matriz[l][c]);
			        }
				printf("\n\n");
			}
		
		   // imprimindo a matriz
		
		
			printf("\n\n A MATRIZ 123 E: \n");
			   for (l=--lin; l>=0; l--) {
			        for (c=--col; c>=0; c--) {
			            printf("%3.d\t",matriz[l][c]);
			        }
			    printf("\n");
				}
	}
    	
		
	int somarnm(){
	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Descrição : <Aqui você descreve o que o programa faz! (função)>
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>	
		int Sum(int value){
	    	if(value != 0){
	      	  return value + Sum(value-1);
	   		} 	
			else{
	        	return value;
	    	}
	 	}	

	double fat(double n) {
	  double vfat;
		  if ( n <= 1 ) {
		 
		    return (1); 
			}
			  else {
			    //Chamada recursiva
			    vfat = n * fat(n - 1);
			    return (vfat);
			}
	}
	

			int b, a,fat1, fat2, result1, result2;
	
			printf("\n\nDigite o primeiro número: ");
			scanf("%d", &a);
	
			  result1 = Sum(a);
	
	    printf("\n\n -> O somatório do número é: %d", result1);
	
	      fat1 = fat(result1);
	
			printf("\n -> Resultado do fatorial do número é:  %d", fat1);
	
	    printf("\n\n  ---------------------- \n\n ");
	
			printf("\n\nDigite o segundo número: ");
			scanf("%d", &b);
	
			  result2 = Sum(b);
	
	    printf("\n\n -> O somatório do número é: %d", result2);
	
	      fat2 = fat(result2);
	
			printf("\n -> Resultado do fatorial do número é:  %d \n\n", fat2);
	
			getchar();
	}
	

   int somarequacoes(){
   	// Faculdade Pitágoras – Afonso Pena
	// Disciplina : Algoritmos e Técnicas de Programação
	// Professor : Luiz Mesquita
	// Descrição : <Aqui você descreve o que o programa faz! (função)>
	// Autor(a) : Camila do Nascimento Roque
	// Data atual : <09/06/2020>
	   int Sum(int n){
	        int result = 0;
		        if(n < 0){
		            return result;
		        } else {
			        result = pow(n,2) + 2 * n + 3;
			        return result + Sum(n-1);
	        	}
	    }
	
	    double fat(double n){
	        double vfat;
	
		        if ( n <= 1 ) {
		        	return (1);
				}
				 else {
			        vfat = n * fat(n - 1);
			        	return (vfat);
		        }
	    }
	
	 		int a ,b, fat1, fat2, result1, result2;
	
	
		        printf("\n\n  Digite um limite para o domínio da função: ");
		        	scanf("%d",&a);
		
		        result1 = Sum(a);
		        printf("\n\n -> O somatório da equação é: %d", result1);
		
		        fat1 = fat(result1);
		        printf("\n -> Resultado do fatorial da equação é:  %d \n\n", fat1);
		
		        printf("\n\n  ---------------------- \n\n ");
		
		        printf("\n\n  Digite um limite para o domínio da função: ");
		        	scanf("%d",&b);
		
		        result2 = Sum(b);
		        printf("\n\n -> O somatório da equação é: %d", result2);
		
		        fat2 = fat(result2);
		        printf("\n -> Resultado do fatorial da equação é:  %d \n\n", fat2);
		
		
		getchar();
	}
  


	int main(){
	  int opcaoMenu;
		printf("Escolha um numero de 1 a 11 para realizar a funcao correspondente: \n\n\n ");
		printf("     1- Nome e idade\n");
	  	printf("     2- Media de 5\n");
		printf("     3- Juros de dois meses\n");
	 	printf("     4- Relogio com segundos\n");
	 	printf("     5- Meses\n");
	  	printf("     6- Tabuada(jogo)\n");
	  	printf("     7- MDC com tres numeros\n");
		printf("     8- X numeros\n");
	 	printf("     9- Matriz Inversa\n");
	 	printf("    10- Somar N M\n");
	 	printf("    11- Somar 2 equações\n");
	  		scanf("%d", &opcaoMenu);
	 	printf("\n\n\n _________________________________________________________\n");
	  
	  	switch(opcaoMenu) {
			
			case 1:
			nomeeidade();
			break;
	
			case 2:
			mediadecinco();
			break;
			
			case 3:
			jurosdedoismeses();
			break;
			
			case 4:
			relogiocomsegundos();
			break;
			
			case 5:
			meses();
			break;
	
			case 6:
			tabuadajogo();
			break;
		    
		    
			case 7:
			mdc();
			break;
		    	
		    case 8:
		    xnumbers();
			break;
			
			case 9:
			matrizinversa();
			break;
			
			case 10:
			somarnm();
			break;
		
			case 11:
			somarequacoes();
			break;
			default: 
		printf("Inválido");
	
	}
  
  


return (0);
}

