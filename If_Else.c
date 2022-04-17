#include<stdio.h>

int main(){
	

	// conditional statements


	// if else


	// int x = 20;
	// if(x < 10){
	// 	printf("%d", x);
	// }

	// else{
	// 	printf("Something");
	// }



	// int age;


	// printf("Enter age: ");

	// scanf("%d", &age);


	// if( age > 18){
	// 	printf("An adult");
	// }

	// else{
	// 	printf("A kid");
	// }



	// int age;
	// printf("Enter age: ");

	// scanf("%d", &age);  // 11

	// if (age > 10){

	// 	if (age < 25){

	// 		printf("Between 10 and 25");

	// 	}
	// }


	// else{

	// 	printf(" not between 10 and 25");
	// }


	// int number;
	// printf("Enter age: ");
	// scanf("%d", &number);  


	// 2 / 4 quotient=2 remainder=0
	// 2 / 5  1


	// = --> assing
	// == --> compare


	// if (number % 2 == 0){
	// 	// 25 is even number
	// 		printf("%d is Even number", number);
	// }

	// else {

	// 	printf("%d is Odd number", number);
	// }



	int number1, number2, number3;

	// nested if else, loops are used when we have to check or do multiple things at the same time.!


	printf("Enter Number1 \n");

	scanf("%d", &number1);


	printf("Enter Number2 \n");


	scanf("%d", &number2);


	printf("Enter Number3 \n");

	scanf("%d", &number3);



	//  &&
//  1011011
//  1010010
// &   1010010
  





        // 100      10          100       1
	if (number1 > number2 && number1 > number3){

		printf("%d is greatest", number1);
	}


	if (number2 > number1 && number2 > number3){
		printf("%d is greatest", number2);
	}

	if (number3 > number1 && number3 > number2 ){
		printf("%d is greatest", number3);
	}







// // for number2 to be greatest
// 	if(number2 > number1){

//  			if( number2 > number3 ){

//  					printf("%d is greatest", number2);

//  			}
// 	}



// // for number1 to be greatest
// 	if (number1 > number2){

// 		if (number1 > number3){

// 			printf("%d is greatest", number1);

// 		}

// 	}
	
// // for number3 to be greatest

// 	if(number3 > number2){

// 		if(number3 > number1){

// 				printf("%d is greatest", number3);

// 		}

// 	}


	




}



