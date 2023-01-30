#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "fsm.h"


int main()
{
     pthread_t thread1, thread2;

     //pthread_create( &thread1, NULL, print_message_function, NULL);
     //pthread_create( &thread2, NULL, print_message_function, NULL);

     /* Wait till threads are complete before main continues. Unless we  */
     /* wait we run the risk of executing an exit which will terminate   */
     /* the process and all threads before the threads have completed.   */

     //pthread_join( thread1, NULL);
     //pthread_join( thread2, NULL); 

     //printf("Thread 1 returns: %d\n",iret1);
     //printf("Thread 2 returns: %d\n",iret2);
     exit(0);
}

