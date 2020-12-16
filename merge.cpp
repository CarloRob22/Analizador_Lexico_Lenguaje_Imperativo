void margen(void)
{
int i, j;
textbackground(BLUE);
textcolor(WHITE);
for (i=1; i<=80; i++)
{
gotoxy(i,1);cprintf("%c", 176);
gotoxy(i,24);cprintf("%c", 176);
}
for (i=1; i<=24; i++)
{
gotoxy(1,i);cprintf("%c", 176);
gotoxy(80,i);cprintf("%c", 176);
}
}
/*********PALABRAS RESERVADAS*******/
booleano palabraReservada(cadena cad)
{
int i;
cadena lista[]={"int", "float", "char", "enum", "unsigned", "short",
"long", "double", "class", "public", "static", "void", "main",
"protected", "for", "if", "while", "do", "switch", "case", "default",
"{", "}", "printf", "goto", "scanf", "gotoxy", "typedef", "struct",
"union", "auto", "return", "include", "define", "malloc", "new",
"delete", "continue", "free", "else"};
for (i=0; i<40; i++)
if (strcmp(lista[i], cad)==0)
return TRUE;
return FALSE;
}
