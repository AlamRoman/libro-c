#include <stdio.h>

int main(){
	int lunghezza,conta=0,i=0;
	char lettera;
	
	printf("Inserisci quanto lungo e' la stringa: ");
	scanf("%d",&lunghezza);
		
	char str[lunghezza];
		
	printf("Inserisci la stringa: ");
	getchar();
	scanf("%s",str);
		
	printf("Inserisci la lettera da cercare: ");
	scanf(" %c",&lettera);
		
	while(str[i]!='\0'){
		if(str[i]==lettera){
			conta++;
		}
		i++;
	}	
		
	if(conta>0){
		printf("La lettera %c compare nella stringa %d volte\n",lettera,conta);
	}else{
		printf("La lettera %c non compare nella stringa\n",lettera);
	}

	return 0;
}
