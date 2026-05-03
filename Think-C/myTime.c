#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
	/*calculate seconds since midnight and seconds till midnight*/
	int hours, minutes, seconds,timeSinceMidnight,timeTillMidnight,percentOfDay;
	char colon;
	

	hours = 19;
	minutes = 40;
	seconds = 10;
	colon = ':';

	timeSinceMidnight = (hours * 3600) + (minutes * 60) + seconds;
	timeTillMidnight = 84600 - timeSinceMidnight;
	percentOfDay = (timeSinceMidnight * 100/ 84600) ;

	printf("The current time is: %i%c%i%c%i\n",hours,colon,minutes,colon,seconds);
	printf("It's been %i seconds since midnight\n",timeSinceMidnight);
	printf("There are %i seconds until midnight\n",timeTillMidnight);
	printf("%i%% of the day has passed",percentOfDay);

	return(EXIT_SUCCESS);
}
