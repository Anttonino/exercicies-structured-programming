#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>
	
using namespace std;
		
int contar_consoantes(const char * string)
{
    int contador = 0;
    while(*string)
    //strchr busca um caractere e retorna a primeira ocorrência
        if(strchr("bcdfghjklmnpqrstvwxyz", tolower(*string++)))//Tolower converte os caracteres maiúsculos para minúsculos
            contador++;
    return contador;
}

int main(void){
	
setlocale(LC_ALL, "Portuguese");
	
    char frase[100]; int op;

cout<<"Contador de consoantes a partir de strings"<<endl;
cout<<endl<<"1 - Digitar frase"<<endl;
cout<<"0 - Encerrar programa"<<endl;

cout<<endl<<"Comando: "; cin>>op;
getchar();//Comando para limpar o buffer 

switch(op){ 
	
	case 1:
	
	cout<<endl<<"Digite uma frase: "; scanf("%[^\n]",frase);
    cout<<endl<<"A quantidade de consoantes na string '"<<frase<<"' é "<<contar_consoantes(frase)<<endl;
    
    break;
    
    case 0:
    	
    	cout<<endl<<"Programa encerrado!";
		exit(0);
    
	break;
		
}
  

}
