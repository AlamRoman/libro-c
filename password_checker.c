#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//funzione per controllare se ci sono numeri nella stringa
int numcheck(char string[], int lenght){
    int i,j,counter=0;

    for(i=0;i<=9;i++){
        
        for ( j = 0; j < lenght; j++)
        {
            if (string[j]==i+48)
            {
                counter++;
                break;
            }
            
        }
        if (counter!=0)
        {
            break;
        }   
        
    }

    return counter;
}

//funzione per controllare se ci sono lettere minuscole nella stringa
int lettercheck(char string[], int lenght){
    int i,j,counter=0;

    for ( i = 97; i <= 122 ; i++)
    {
        for ( j = 0; j < lenght; j++)
        {
            if (string[j]==i)
            {
                counter++;
                break;
            }
            
        }
        if (counter!=0)
        {
            break;
        }
        
    }

    return counter;
}

//funzione per controllare se ci sono lettere maiuscole nella stringa
int capital_lettercheck(char string[], int lenght){
    int i,j,counter=0;

    for ( i = 65; i <= 90 ; i++)
    {
        
        for ( j = 0; j < lenght; j++)
        {
            if (string[j]==i)
            {
                counter++;
                break;
            }
            
        }
        if (counter!=0)
        {
            break;
        }
        
    }

    return counter;
}

//funzione per controllare se ci sono simboli nella stringa
int symbolcheck(char string[], int lenght){
    int i,j,counter=0;

    for ( i = 0; i < lenght ; i++)
    {
        for ( j = 33; j <= 47; j++)
        {
            if (string[i]==j)
            {
                counter++;
                break;
            }           
        }
        if (counter!=0)
        {
           break;
        }
        

        for ( j = 58; j <= 64; j++)
        {
            if (string[i]==j)
            {
                counter++;
                break;
            }           
        }
        if (counter!=0)
        {
           break;
        }
    }

    return counter;
}

int main(){
    int lenght,num_counter=0,letter_counter=0,cap_letter_counter=0,symbol_counter=0;
    char password[100];
    bool shortpassword;

    //chiede di inserire la password
    printf("Inserisci la tua password: ");
    //salva la password nella stringa
    scanf("%s",password);
    //trova la lunghezza della stringa
    lenght=strlen(password);

    //controlla se la password è troppo corta
    if (lenght<8)
    {
        shortpassword=true;
    }
    
    //controlla la stringa e determina i valori dei contatori
    num_counter=numcheck(password,lenght);
    letter_counter=lettercheck(password,lenght);
    cap_letter_counter=capital_lettercheck(password,lenght);
    symbol_counter=symbolcheck(password,lenght);

    if (shortpassword==true)
    {
        printf("Il tuo password deve essere lungo 8 o piu caratteri.\n");
    }
    if (num_counter==0)
    {
        printf("Il tuo password deve contenere almeno un numero.\n");
    }
    if (letter_counter==0)
    {
        printf("Il tuo password deve contenere almeno una lettera minuscola.\n");
    }
    if (cap_letter_counter==0)
    {
        printf("Il tuo password deve contenere almeno una lettera maiuscola.\n");
    }
    if(symbol_counter==0){
        printf("Il tuo password deve contenere almeno un simbolo tra questi ( !\"#$&'()*+,-.=:;</>?@ ).\n"); 
    }
    if(shortpassword==false && num_counter>0 && letter_counter>0 && cap_letter_counter>0 && symbol_counter>0)
    {
        printf("Il tuo password e' buono\n");
    }
    
    return 0;
}