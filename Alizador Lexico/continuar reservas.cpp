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


