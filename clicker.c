#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"


void draw_menu(void){
	printf("1. Store	Enter. Catch A Virus");
}


int draw_store(void){
	system("clear");
	int selection;
	printf("1. Buy Floppy (100 Virus Capacity) - 75\n2. Buy CD (1000 virus Capacity) - 750	");
	printf("\n3. Upgrade Virus Hunting Efficency - 500\n");
	scanf("%d",&selection);

	switch(selection){
		case 1:
			return 1;
	}

}

void draw_floppy(int viruses){

system("clear");
draw_menu();
printf("\n\n");

if(viruses < 10){
	puts(" ___________________________.");
	puts("|;;|       Viruses       |;;||");
	puts("|[]|---------------------|[]||");
	puts("|;;|                     |;;||");
	puts("|;;|                     |;;||");
	printf("|;;|         %d           |;;||\n",viruses);
	puts("|;;|                     |;;||");
	puts("|;;|                     |;;||");
	puts("|;;|                     |;;||");
	puts("|;;|_____________________|;;||");
	puts("|;;;;;;;;;;;;;;;;;;;;;;;;;;;||");
	puts("|;;;;;;_______________ ;;;;;||");
	puts("|;;;;;|  ___          |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |___|         |;;;;;||");
	puts("\\_____|_______________|_____||");
}else if(viruses < 100){
	printf(YELLOW);
	puts(" ___________________________.");
	puts("|;;|       Viruses       |;;||");
	puts("|[]|---------------------|[]||");
	puts("|;;|                     |;;||");
	puts("|;;|                     |;;||");
	printf("|;;|         %d          |;;||\n",viruses);
	puts("|;;|                     |;;||");
	puts("|;;|                     |;;||");
	puts("|;;|                     |;;||");
	puts("|;;|_____________________|;;||");
	puts("|;;;;;;;;;;;;;;;;;;;;;;;;;;;||");
	puts("|;;;;;;_______________ ;;;;;||");
	puts("|;;;;;|  ___          |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |___|         |;;;;;||");
	puts("\\_____|_______________|_____||");
	printf(RESET);
}else{
	printf(RED);
	puts(" ___________________________.");
	puts("|;;|       Viruses       |;;||");
	puts("|[]|---------------------|[]||");
	puts("|;;|                     |;;||");
	puts("|;;|                     |;;||");
	printf("|;;|       MAXED         |;;||\n");
	puts("|;;|                     |;;||");
	puts("|;;|                     |;;||");
	puts("|;;|                     |;;||");
	puts("|;;|_____________________|;;||");
	puts("|;;;;;;;;;;;;;;;;;;;;;;;;;;;||");
	puts("|;;;;;;_______________ ;;;;;||");
	puts("|;;;;;|  ___          |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |;;;|         |;;;;;||");
	puts("|;;;;;| |___|         |;;;;;||");
	puts("\\_____|_______________|_____||");
	printf(RESET);
}
puts("\n");

return;
}


int main(void){
	char selection;
	// Storage type bool values
	int storageIsFloppy = 1;
	int storageIsCD = 0;
	// Level Values
	int floppyLevel = 1;
	int compactDiscLevel = 0;
	int virusHunterLevel = 0;

	int clicks = 0;

	while(1){
		if(storageIsFloppy){
			draw_floppy(clicks);
			printf("Floppy Lvl:  %d\n",floppyLevel);
		}
		printf("Virus Hunter Lvl:  %d\n\n",virusHunterLevel);

		scanf("%c",&selection);

		switch(selection){
			case '1':
				int storeChoice;
				storeChoice = draw_store();

				switch(storeChoice){
					case 1:
						if((floppyLevel +1) >= 11){
							floppyLevel = 10;
							system("clear");
							printf(RED);
							puts("FLOPPY STACK CAN'T EXCEED 10");
							sleep(2);
							printf(RESET);
						}else{
							floppyLevel++;
						}
						break;
					case 2:
						puts("Place holder");
						sleep(2);
				}

			default:
				if(!virusHunterLevel){
					clicks++;
				}else{
					clicks = clicks + (1*virusHunterLevel);
				}
		}
	}
}

