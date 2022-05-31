#include<stdio.h>

//this program may be a sub-routine because it only solves one problem: the car to choose; 

int selectCar (int n);

int main (){

int n, flag; 
	
printf("Select a car from your garage!! \n\n\n");
printf("Type 1 for the Civic \n");
printf("Type 2 for the Bug \n");
printf("Type 3 for the Truck \n");
printf("Which one? "); 
scanf("%d", &n);

flag = selectCar(n);

	if(flag==1){
	printf("Congratulations on the chosen car!!\n");
	}
	else{
	printf("You won't be driving anything \n");
	}
	
return 0;
}

int selectCar(int n){  //all cars must return a value 1 in order to the function to work; 

		switch (n){
		case 1:
			printf("You have chosen the 1995 Honda Civic Coupe \n");
			return 1;
			break;
		case 2:
			printf("You have chosen the 1977 VW Beetle \n");
			return 1; 
			break;
		case 3:
			printf("You have chosen the 1974 Chevy C10 Truck \n");
			return 1; 
			break; 
		default:
			printf("You have chosen nothing \n");
	}
return 0; 
}
