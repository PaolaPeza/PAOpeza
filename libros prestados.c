# include <stdio.h>
# include <stdlib.h>
int main()
{
int dia[10],suma, l;
int promedio;
printf ("\n programa prestamo de libros\n");
for (l=0; l<10; l++)
{
printf ("\n\t ingrese numero de libros prestados #%i\t", l+1);
scanf ("%i", & dia[l]);
while (dia [l]<=0)
{
printf ("\n\t Error! \n\t Ingrese de nuevo numero de libros prestados no.%i\t", l+1);
scanf ("%i", & dia[l]);
}
suma+=dia[l];
}
promedio=suma/10;
printf ("\n el promedio de libros es %i\n",promedio);
for (l=0; l<10; l++)
{

if (dia[l] < promedio)
{
    printf("\n el dia no%i se prestaron %i menos libros\n", l+1, dia[l]);
}
if (dia[l] > promedio)
{
printf ("\n el dia no.%i se prestaron mas %i libros\n", l+1, dia[l]);
}
}
system ("PAUSE");
return 0;
}

