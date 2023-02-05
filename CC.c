#include <stdio.h>
void main(){

	int year_of_birth;
	year_of_birth = 1994;
		
	int current_year;
	current_year = 2023;

	char name[23] = "Mulang Oduor Martin";

	int age;
	age = current_year - year_of_birth;

	printf("%s is currently %d years old\n", name, age);

}
