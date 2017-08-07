#include <stdio.h>

int main(){

char c;
int contapalavra=0, palavra=0, contavirgula=0, contanumero=0;

	while (c != '\n'){
		scanf("%c",&c);      

		if (((c>=97) && (c<=122)) || ((c>=65) && (c<=90)) || ((c>=128) && (c<=151)) || (c==153) || (c==154) || ((c>=160) && (c<=165)))
	 		contapalavra = 1; 

		if ((contapalavra == 1) && (((c>=9) && (c<=13)) || ((c>=32) && (c<=47)) || ((c>=91) && (c<=96)) || ((c>=123) && (c<=126)) || (c==152) || (c==158) || ((c>=168) && (c<=255)))){
	   		palavra++;
	   		contapalavra=0;
		}
	   
		if ((contanumero == 1) && (((c>=9) && (c<=13)) || ((c>=32) && (c<=47)) || ((c>=91) && (c<=96)) || ((c>=123) && (c<=126)) || (c==152) || (c==158) || ((c>=168) && (c<=255)))){

			if (((c != 44) && (c != 46))){ 
	 			palavra++;
	   			contanumero=0;
				contavirgula = 0;
			}

			if ((contanumero == 1)){
				if ((contavirgula == 1) && ((c == 44) || (c == 46))){
					palavra++;
					contanumero = 0;
					contavirgula = 0;
				}
			}

			if ((contanumero == 1) && ((c == 44) || (c == 46)) && (contavirgula ==0))
				contavirgula++;
		}

		if ((c>=48) && (c<=57))
	     		contanumero=1;          
	}

	printf ("%d\n", palavra);
	return 0;
}

