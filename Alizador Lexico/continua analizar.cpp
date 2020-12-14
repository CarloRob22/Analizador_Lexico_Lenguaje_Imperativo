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

