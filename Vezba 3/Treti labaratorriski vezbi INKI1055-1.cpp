/* asctime example */
#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, time, localtime, asctime */

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "The current date/time is: %s", asctime (timeinfo) );

  return 0;
}
//Овој код го демонстрира користењето на функцијата asctime за прикажување на моменталната дата и време.
//Кога ja стартуваме програмата, прво се декларираат променливите rawtime и timeinfo. 
//Потоа, со користење на функцијата time се зема моменталното време и се зачувува во променливата rawtime.
//Со користење на функцијата localtime, моменталното време во rawtime се конвертира во структура од типот struct tm, која претставува локално време. Оваа структура се зачувува во timeinfo.
//Со користење на функцијата asctime, се претворува структурата timeinfo во стринг кој го претставува моменталното време во локалната временска зона и потоа се печати на екранот со printf функцијата.

