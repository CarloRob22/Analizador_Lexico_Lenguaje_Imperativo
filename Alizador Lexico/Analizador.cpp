#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void AnalizarCaracter(char letra);
void Estados();
void PReservadas();

const char *reservadas[] = {"encender","apagar","inicio","definir","repetir","fin","mientras",
	"si","sino"};
	
int Indicador=sizeof(reservadas)/sizeof(char *);
int i; 
char identificador[99];
char temp[2];
int estado=0;


int contadorEncender=0;
int contadorApagado=0;
int contadorCiclos=0;
int contadorVariables=0;
int contadorNumeros=0;
int contadorPReservadas=0;
int contadorSimbolos=0;
int contadorSignos=0;


int main()
{
	
	FILE *archivoEntrada;
	FILE *archivoSalida; 
	 
	printf("---- ANALIZADOR LEXICO ----");
	printf("Preparando archivo...");
   
	archivoEntrada=fopen("autores.txt" );
	archivoSalida=fopen("salida.txt");
	
	char caracter;
	
	if ( archivoEntrda == NULL ) 
	{
		printf ( "El archivo no fue encontrado." ) ;
     	return 1;
   	}
    
	printf( "Leyendo entrada.txt...." );
	printf( "Archivo listo...." );
	
   	while (1)
	{
	   
	   	caracter=fgetc(archivoE);
	  	if(caracter==EOF)
		{
	  	break;
	  	}

	  	while(i==0)
		  	{
		   	if(caracter!='i'&&caracter!='n'&&caracter!='i'&&caracter!='c'&&caracter!='i'&&caracter!='o')
			   {
			   	printf("\n\nError, No se encontro el inicio");
		   		exit(-1);
				}
		   	i=1;
	  		}
	}
	  	
	  
	
	AnalizarCaracter(caracter);
		switch(caracter){
	
		case 1:contadorSimbolos++;
			break;
		case 2:contadorSimbolos++;
			break;
		case 3:contadorSimbolos++;
			break;
		case 4:contadorSimbolos++;
			break;
		case 5:contadorSimbolos++;
			break;
   	}
 
			
}


  void AnalizarCaracter(char letra){
		
		if(letra==32||letra=='}'||letra=='{'||letra=='('
		||letra==')'||letra==';')
		{
			Estados();
		}
		
		if( letra>='A' && letra<='Z' ){
			if(estado==0){
				estado=1;
			}else if(estado==1||estado==2){
				estado=2;
			}
			else if(estado!=0 && estado!=1 && estado!=2){
				printf("No es valido");
				exit(-1);
			}
		}
		if(letra>='a' && letra<='z'){
			if(estado==0){
				temp[0]=letra; 
				strcat(identificador,tmp); 
				estado=3;
			}else if(estado==1||estado==2){
				estado=2;
			}
			else if(estado==3){
				temp[0]=letra; 
				strcat(identificador,tmp);
				estado=3;}
			else{
				printf("No es valido"); 
				exit(-1);
			}
		}
		if(letra<='9'&&letra>='0'){
			if(estado==0){
				estado=4;
			}else if(estado==4||estado==5){
				estado=5;
			}else if(estado==13||estado==6){
				estado=6;
			}else if(estado==1||estado==2){
				estado=2;
			}else if(estado==7){
				estado=4;
			}else{
				printf("ERROR"); 
				exit(-1);
			}
		}
		if(letra=='+'){
			if(estado==0){
				estado=8;
			}else if(estado==8){
				estado=17;
			}
		}
		if(letra=='.'){
            if((letra)<'1' || (letra)>='9'){
                estado=19;
            }else{
                if(estado==4||estado==5&&((letra)=='1'||(letra)=='2'||(letra)=='3'
					||(letra)=='4'||(letra)=='5'||(letra)=='6'||(letra)=='7'||(letra)=='8'
					||(letra)=='9')){
                    estado=20;
                }
                else if(estado!=4 && estado!=5){
                    printf("ERROR"); 
                    exit(-1);
                }
            }
        }
	    if(letra=='^'){
            if(estado==0){
                estado=18;
            }
            else{
                printf("ERROR '^'");
                exit(-1);
            } 
        }
        if(letra=='-'){
            if(estado==0){
                estado=7;
            }else if(estado==12){
                estado=10;}
        }   else if(estado==7){
            estado=17;
        }
        if(letra=='='){
            if(estado==0){
                estado=9;
            }else if(estado==18){
                estado=11;
            }
        }else if(estado==12){
            estado=16;
           }else if(estado==13){
                 estado=15;
           }
        
        
        if(letra=='/'||letra=='*'){
            if(estado==0){
                estado=18;
            }else{
                printf("ERROR");
                exit(-1);
            }
        }
        if(letra=='<'){                
            if(estado==0){
                estado=12;
            }else{
                printf("ERROR '<'");
                exit(-1);
            }
        }
        if(letra=='>'){   
            if(estado==0){
                estado=14;
            }else{
                printf("ERROR '>'");
                exit(-1);
            }
        }   
        
        
        if(letra=='!'){
            if(estado==0){
                estado=18;
            }else{
                printf("ERROR '!'");} 
        }
    }
}

void Reservadas(){
	for(int i=0;i<TamañoIndicador;i++){
		if(strcmp(reservadas[i],identificador)==0){
			contadorPalabrasReservadas++;
			identificador[0]='0';
			break;
		}
		if(i==(IndicadorTam)-1){
			exit(-1);
		}
	}		
}


void Estados(){
	
	switch(estado){
			case 1:contadorVariables++;
			break;
			case 2:contadorVariables++;
			break;
			case 3: BuscarReservadas();
			break;
			case 4:contadorNumeros++;
			break;
			case 5:contadorNumeros++;
			break;
			case 6:contadorNumeros++;
			break;
			case 7:contadorSignos++;
			break;
			case 8:contadorSignos++;
			break;
			case 9:contadorSimbolos++;
			break;
			case 10:contadorSignos++; 
			break;
			case 11:contadorSimbolos++; 
			break;
			case 12:contadorSimbolos++;
			break;
			case 14:contadorSimbolos++;
			break;
			case 15:contadorSimbolos++; 
			break;
			case 16:contadorSimbolos++; 
			break;
			case 17:contadorSignos++; 
			break;
			case 18:contadorSignos++; 
			break;
			case 19:contadorSimbolos++;  
			break;
			case 20:contadorNumeros++; 	
			break;
			default:
				break;
			}	
			
			estado = 0;	
}
