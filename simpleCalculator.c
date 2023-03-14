#include <stdio.h>

int a;
int b;
int sum;    //sum of operation
char opp;   //operator character


int calculate() {
	//determines operation and assigns answer to sum
	switch(opp) {
	case '+':
		sum = a + b;
		return sum;
		break;
  case '-':
		sum = a - b;
		return sum;
		break;
	case '*':
		sum = a * b;
		return sum;
		break;
	case '/':
		sum = a / b;
		return sum;
		break;
	default:
		printf("Invalid operation");
		return 0;
		break;
    }
}

int main() {
	printf("Enter an equation: ");
	scanf("%d%c%d", &a, &opp, &b); //gets user input
	printf("%d %c %d = %d", a, opp, b, calculate()); //prints full equation with answer

	return 0;
}
