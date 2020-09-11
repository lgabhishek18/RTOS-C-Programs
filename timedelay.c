#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
void delay(float x_sec)
{
int m_sec = 1000 * x_sec;
    	clock_t start_time = clock();
    	while (clock() < start_time + m_sec)
        		;
}
int main()
{
    	int i = 0;
    	float delay_time;
    	printf("\nThe delay in sec - ");
    	scanf("%f", &delay_time);
    	while (!kbhit())
    	{
        		printf("\nTime passed is - %f", delay_time);
        		printf("\nThe Random No is - %d", rand());
        		delay(delay_time);
        		i++;
    	}
   	 main();
    	return 0;
}

