#include <stdio.h>
#include <string.h>
void main(){

	int year_of_birth;
	year_of_birth = 1994;
		
	int current_year;
	current_year = 2023;

	char name[23] = "Mulang Oduor Martin";

	int age;
	age = current_year - year_of_birth;

	printf("%s is currently %d years old\n", name, age);
	
	char best_man[28] = "Thomas Nyakundii";
	printf("%s shall be in my wedding. \nThat is a given because he is just %d years old\n", best_man, age);

	strcpy(best_man, "Mwanzia Mwikali Caroline\n");
        printf("%s shall be in my wedding. \nThat is a given because she is just %d years old", best_man, age);

};
