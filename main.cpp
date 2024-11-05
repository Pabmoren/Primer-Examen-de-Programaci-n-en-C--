#include <cstdio>
#include <random>

int main() {
  int a = 0;
  int diadelasemana = 0;
  int cal[9];
  double media;
  int i = 0;
  int error = 0;
  double precio[4];
  double preciototal = 0;

  while (i <= 8) {
    cal[i] = 1;
    i++;
  }
  i = 1;
  cal[9] = 0;
  while (i <= 3) {
    precio[i] = 1.0;
    i++;
  }
  i = 1;
  precio[4] = 0;
  /* Ejercicio 1: creo la variable a para almacenar un entero, le pido al usuario que introduzca un entero y el programa
     revisa si el entero es mayor menor o igual a cero (positivo, negativo o cero). Tiene manejo de errores si el numero
     introducido no está en los grupos anteriores.
  */
  printf("Introduzca un numero entero:\n");
  scanf("%d",&a);
  if(a > 0)
    printf("El numero entero es positivo.\n");
  else if(a < 0)
    printf("El numero entero es negativo.\n");
  else if(a == 0)
    printf("El numero entero es cero.\n");
  else {
    printf("No ha introducido un numero entero.\n");
    error = 1;
  }

  /* Ejercicio 2: creo la variable b y la variable diadelasemana de tal manera que b es la que se mueve por el bucle para encontrar
     el dia de la semana y diadelasemana almacena el numero que ha metido el usuario, tambien hay un comprobador para saber si el
     número de la semana introducido está entre los valores permitidos o no
  */
  printf("Introduce el numero correspondiente al dia de la semana que quieras saber:\n");
  scanf("%d",&diadelasemana);
  if(diadelasemana < 1 || diadelasemana > 7) {
    printf("Los dias de la semana solo van del 1 al 7 ._.\n");
    error = 1;
  }
  if (diadelasemana == 1)
    printf("El dia de la semana numero 1 es el: Lunes.\n");
  if(diadelasemana == 2)
    printf("El dia de la semana numero 2 es el: Martes.\n");
  if(diadelasemana == 3)
    printf("El dia de la semana numero 3 es el: Miercoles.\n");
  if(diadelasemana == 4)
    printf("El dia de la semana numero 4 es el: Jueves.\n");
  if(diadelasemana == 5)
    printf("El dia de la semana numero 5 es el: Viernes.\n");
  if(diadelasemana == 6)
    printf("El dia de la semana numero 6 es el: Sabado.\n");
  if(diadelasemana == 7)
    printf("El dia de la semana numero 7 es el: Domingo.\n");

/* Ejercicio 3: He creado un array de numeros enteros llamado cal[] que tiene 9 huecos para meterle números
   abajo hay un while que crea un bucle que recorre el array para que el usuario introduzca los números de las calificaciones
   luego almacena esas calificaciones en uno de los huecos del array. Al final calcula la media en una variable aparte llamada
   media y la imprime.
*/

  while(cal[i] != 0) {
    printf("Introduzca la calificacion numero %d\n", i);
    scanf("%d",&cal[i]);
    i++;
  }
  media = cal[1] + cal[2] + cal[3] + cal[4] + cal[5] + cal[6] + cal[7] + cal[8];
  media = media / 8;
  printf("La media es: %f\n", media);

/* Ejercicio 4:

*/

  i = 1;
  while(precio[i] != 0) {
    printf("El programa solo maneja que los precios sean diferentes entre si.\n");
    printf("Introduzca el precio numero: %d\n", i);
    scanf("%d",&precio[i]);
    i++;
  }
  if(precio[2] < precio[3] && precio[2] < precio[1])
    preciototal = precio[1] + precio[3];
  else if(precio[1] < precio[3] && precio[1] < precio[2])
    preciototal = precio[2] + precio[3];
  else
    preciototal = precio[1] + precio[2];
  printf("El precio total es: %f\n", preciototal);
  return error;
}
