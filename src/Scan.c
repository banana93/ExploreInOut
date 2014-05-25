#include "stdio.h"
#include "Scan.h"
 
char id[20];
char city[30];

char *get_id()
{
	scanf("%s", id);
	return id;
}

char *get_city()
{
	scanf("%s", city);
	return city;
}

main()
{	
	printf("%s", "Please give me your id: ");
	printf("You have entered your id as: %s", get_id());
	printf("%s", "\nPlease give me your city you live in: ");
	printf("You live in: %s", get_city());
}

