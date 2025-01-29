#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>

void compute(int x, int y, char op) {
	int result = 0;
	if (op == 'A')
		result = x + y;
	else if (op == 'B')
		result = x - y;
	else if (op == 'C')
		result = x * y;
	else if (op == 'D') {
		if (y != 0) 
			result = x / y;
		else {
			puts("result: error\n");
			return;			
		}
	}
	else 
		puts("invalid choice\n");
	if 	(op == 'A' || op == 'B' || op == 'C' || op == 'D')
		printf("result: %i\n\n", result);	
			
}

void menu() {
	puts("[A] ADD");
	puts("[B] SUBTRACT");
	puts("[C] MULTIPLY");
	puts("[D] DIVIDE");
	puts("[E] EXIT");
}

main() {
	int num1 = 0, num2 = 0;
	char choice;
	while (true) {
		menu();
		printf("choice => ");scanf(" %c", &choice);
		choice = toupper(choice);
		if  (choice == 'E') {
			puts("end of the program");
			break;
		}
		system("cls");
		if (choice == 'A' || choice == 'B' || choice == 'C' || choice == 'D') {
			printf("num1 -> ");scanf("%i", &num1);
			printf("num2 -> ");scanf("%i", &num2);
		}
		compute(num1,num2,choice);
		puts("press any key to continue...");
		getch();system("cls");
	}
}