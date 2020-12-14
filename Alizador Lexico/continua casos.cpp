
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

