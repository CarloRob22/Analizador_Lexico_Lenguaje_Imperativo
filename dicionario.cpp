resultados diccionario_edos(estados edo)
{
switch (edo)
{
case q1:
return identificador;
case q2:case q15:
return entero;
case q3:case q6:case q7:case q8:case q11:
return aritmeticoFinal;
case q5:
return real;
case q9:case q10:
return relacionalFinal;
case q14:case q19:
return logico;
case q18:
return hexadecimal;
case q21:case q22:case q24:
return exponencial;
}
return entero;
}
/***********AUTOMATA DEL ANALISADOR**********/
booleano automata(cadena cad, estados &edo)
{
int i=0;
estados edoAnterior;
edo=q0;
entradas in;
do
{
in=diccionario(cad[i]);
edoAnterior=edo;
edo=tabla[edo][in];
if (edo==x)
return FALSE;
i++;
}while(edo!=bien);
edo=edoAnterior;
return TRUE;
}resultados diccionario_edos(estados edo)
{
switch (edo)
{
case q1:
return identificador;
case q2:case q15:
return entero;
case q3:case q6:case q7:case q8:case q11:
return aritmeticoFinal;
case q5:
return real;
case q9:case q10:
return relacionalFinal;
case q14:case q19:
return logico;
case q18:
return hexadecimal;
case q21:case q22:case q24:
return exponencial;
}
return entero;
}
/***********AUTOMATA DEL ANALISADOR**********/
booleano automata(cadena cad, estados &edo)
{
int i=0;
estados edoAnterior;
edo=q0;
entradas in;
do
{
in=diccionario(cad[i]);
edoAnterior=edo;
edo=tabla[edo][in];
if (edo==x)
return FALSE;
i++;
}while(edo!=bien);
edo=edoAnterior;
return TRUE;
}
