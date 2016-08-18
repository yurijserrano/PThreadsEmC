#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>


int x=0;

void conta(void)
{
	int y,i;
	for(i=0;i<500;i++)
	{
		
		y=x;
		y+=1;
		x=y;
	
	}

	printf("%d\n",x);
}


int main(void)
{
	
	pthread_t tid;
	pthread_t tid2;

	
	pthread_create(&tid,NULL,(void*)conta,NULL);

	pthread_create(&tid2,NULL,(void*)conta,NULL);

	pthread_join(tid,NULL);

	printf("x = %d\n",x);

	return (0);
}
