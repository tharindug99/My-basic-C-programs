#include <stdio.h>
int main()
{
	const int September = 9;
	const int April = 4;
	const int June = 6;
	const int November = 11;
	const int February = 2;
	
	int month;
	
	printf("Enter number of month: ");
	scanf("%d", &month);

    switch (month)
    {
    case 9:
    case 4:
    case 6:
    case 11:
        printf("30 days\n");
        break;

    case 2:
    printf("28 or 29 days");
        break;
    
    default:
    printf("31 days");
        break;
	}
	
	return 0;
}
