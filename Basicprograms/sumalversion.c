#include <stdio.h>

int pizzaOption(int o){
	if (o == 1) return 1;
	else if(o == 2) return 2;
	else if( o == 3) return 3;
	else {
		printf("wrong option.Enter again!\n");
	}
}

int pizzaSize(int option, char s){

	if(option == 1){
		switch(s){
			case 'P':
				return 500;
				break;

			case 'M':
				return 900;
				break;

			case 'L':
				return 1600;
				break;
			default:
				printf("Enter a correct size!\n");
				break;

		}

	}
	else if(option == 2){
			switch(s){
			case 'P':
				return 600;
				break;

			case 'M':
				return 800;
				break;

			case 'L':
				return 1700;
				break;
			default:
				printf("Enter a correct size!\n");
				break;

		}
	}
	else if(option == 3){
			switch(s){
			case 'P':
				return 800;
				break;

			case 'M':
				return 1000;
				break;

			case 'L':
				return 2000;
				break;
			default:
				printf("Enter a correct size!\n");
				break;

		}
	}



}


int toppings(int top){


	switch(top){
		case 1:
			return 100;
			break;
		case 2:
			return 300;
			break;
		case 3:
			return 100;
			break;
		case 4:
			return 200;
			break;
		default:
			return 0;
			break;

	}


}

void price(int total, int q){
	int totalPrice =  total * q;
	printf("Total price: %d\n", totalPrice);
}



/* Main Function */

int main(){

	int o, q; // q is number of pizzas customer want. o is options of pizzas.
	char s;

	printf("Enter pizza option: \n");
	scanf("%d", &o);

	printf("Size of pizza (P/M/L): \n");
	scanf(" %c", &s);

	printf("Number of pizzas: \n");
	scanf("%d", &q);


	int option = pizzaOption(o);
	printf("%d\n", option);

	int noToppings = pizzaSize(option, s);
	printf("%d\n", noToppings);


	char input;
	int totalprice = 0;
	do{
		printf("Do you need any extra toppings (y/n): ");
		scanf(" %c", &input);

		if(input == 'y'){
			int top;
			printf("Input your option: ");
			scanf("%i", &top);

			totalprice = totalprice + toppings(top);
			printf("checking --------- %d\n", totalprice);
		}

	} while(input == 'y');


	int total = totalprice + noToppings;

	price(total, q);

return 0;

}
