#include <stdio.h>

int main(){
	int lunghezza,conta=0,i=0;
	char lettera;
	
	//prende in input la lunghezza della stringa
	printf("Inserisci quanto lungo e' la stringa: ");
	scanf("%d",&lunghezza);
	
	//dichiara la stringa
	char str[lunghezza];
	
	//prende in input la stringa
	printf("Inserisci la stringa: ");
	getchar();
	scanf("%s",str);
	
	//prende in input il carattere da cercare
	printf("Inserisci la lettera da cercare: ");
	scanf(" %c",&lettera);

	//cerca il carattere nella stringa	
	while(str[i]!='\0'){
		if(str[i]==lettera){
			conta++;
		}
		i++;
	}	
	
	//stampa se il carattere è stato trovato o no
	if(conta>0){
		printf("La lettera %c compare nella stringa %d volte\n",lettera,conta);
	}else{
		printf("La lettera %c non compare nella stringa\n",lettera);
	}

	return 0;
}
