#include<stdio.h>
double ctof(int);

int main(){

	printf("Enter a value in celsius: ");
	int weather, number;
	scanf("%d", &number);
	weather = ctof(number);
	
	if(weather>100){
	printf("\nWarning: Heat Wave\n");
	}
	else if(weather>80){
	printf("\nHot\n");
	}
	else if(weather>41){
	printf("\nNormal\n");
	}

	else{
	printf("\nCold\n");
	}

return 0;
}

double ctof(int num){
	double result;
	result = (num * 1.8) - 32;
	printf("The number you enter in celsius is %lf in fahrenheit",result);
	return result;
}


