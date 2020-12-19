#include <iostream>
#include <fstream>

using namespace std;

string Cadena(string Cadena){
    string TablaSimbolo[16] = {"program", "begin", "led", "var", "if", "else", "end","int","intensity","timer","TRUE","FALSE","pass","endif","boolean","string"};
    enum TEstado{q0,q1,qe};

    TEstado Estado;

    int Simbolo;

    int i;
    int longitud;

    i = longitud = 0;
    Estado = q0;

    longitud = Cadena.size();

    while(longitud > i and Estado != qe){
        Simbolo = Cadena[i];
        switch(!Estado){
            case q0:
                if(Simbolo >= 'a' && Simbolo <= 'z'){
                    Estado = q1;
                }
                break;
            case q1:
                if(Simbolo >= 'a' && Simbolo <= 'z'){
                    Estado = q1;
                }
                else{
                    Estado = qe;
                }
                break;
            }
            i++;
    }
    if(Estado == q1){
        string aux = "Identificador";
        int j;
        int TamanioArreglo = sizeof TablaSimbolo / sizeof TablaSimbolo[0];
        for(j=0; j < TamanioArreglo; j++){
            if(Cadena.compare(TablaSimbolo[j]) == 0){
                return Cadena;
                break;
            }
        }
        return aux;
    }
    else{
        return "Identificador No Valido";
    }
}

int main()
{
    ifstream programa("programa.txt");
    ofstream programaR("programaR.txt");
    string codi;
    int i = 0;
    int j = 0;
    int mp = 0;
    int bg = 0;
    int led = 0;
    int var = 0;
    int iff = 0;
    int iffe = 0;
    int endd = 0;
    int intt = 0;
    int intensity = 0;
    int timer= 0;
    int TRUE =0;
    int FALSE =0;
    int pass =0;
    int EndIf= 0;
    int Bool = 0;
    int stri=0;
    while(!programa.eof()){
        programa>>codi;
        if(Cadena(codi) == "Identificador"){
            i++;
        }else
        if(Cadena(codi) == "Identificador No Valido"){
            j++;
        }else
        if(Cadena(codi) == "program"){
            mp++;
        }else
        if(Cadena(codi) == "begin"){
            bg++;
        }else
        if(Cadena(codi)== "led"){
            led++;
        }else
        if(Cadena(codi)== "var"){
            var++;
        }else
        if(Cadena(codi)== "if"){
            iff++;
        }else
        if(Cadena(codi)== "else"){
            iffe++;
        }else
        if(Cadena(codi)== "end"){
            endd++;
        }else
        if(Cadena(codi)== "int"){
            intt++;
        }else
        if(Cadena(codi)== "intensity"){
            intensity++;
        }else
        if(Cadena(codi)== "timer"){
            timer++;
        }else
        if(Cadena(codi)== "TRUE"){
            TRUE++;
        }else
        if(Cadena(codi)== "FALSE"){
            FALSE++;
        }else
        if(Cadena(codi)== "pass"){
            pass++;
        }else
        if(Cadena(codi)== "END_If"){
            EndIf++;
        }else
        if(Cadena(codi)== "Boolean"){
            Bool++;
        }else
        if(Cadena(codi)== "string"){
            stri++;
        }
        
  
    }
    programaR<<"Identificadores :"<<i<<endl
    <<"Identificador No Valido :"<<j<<endl
    <<"Palabras Reservadas program : "<<mp<<endl
    <<"Palabras Reservadas begin : "<<bg<<endl
    <<"Palabras Reservadas led : "<<led<<endl
    <<"Palabras Reservadas var : "<<var<<endl
    <<"Palabras Reservadas if : "<<iff<<endl
    <<"Palabras Reservadas else : "<<iffe<<endl
    <<"Palabras Reservadas end : "<<endd<<endl
    <<"Palabras Reservadas int : "<<intt<<endl
	<<"Palabras Reservadas intensity : "<<intensity<<endl
	<<"Palabras Reservadas timer : "<<timer<<endl
	<<"Palabras Reservadas TRUE : "<<TRUE<<endl
	<<"Palabras Reservadas FALSE : "<<FALSE<<endl
	<<"Palabras Reservadas pass : "<<pass<<endl
	<<"Palabras Reservadas End_if : "<<EndIf<<endl
	<<"Palabras Reservadas Boolean : "<<Bool<<endl
	<<"Palabras Reservadas string : "<<stri<<endl;
	
	printf("Se realizo la lectura e impresion y se guardo en:  ProgramaR \n\n");

}
