#include "my_Cc_Header_file.h"
#include <stdio.h>
#include <string.h>

void main(){
	int y = 3;
	int x = 4;
	printf("x + y = %d\n", x+y);
	//this is the fisrt C code it wil print hese lines in  a straigt line
	//I hope it pays off
	//And I know it will in the ens

/*
 
   the is int it beautiful
 to know these things is is genius
I will endeavur to learn at all costs
This I have done. I MULANG' HAVE SPKEN


the e cintinue wtih the thingy todat the 5th of february 2022*/


	printf("%s is the best %s ever since %d\n\n", "Caroline", "Girlfrienid", 2019);
	printf("%f Pi to NO decimal places is %f \n", 1.,  3.14675436);
        printf("Pi to TWO decimal places is %.2f\n", 3.14675436);


        printf("Pi to no decimal places is %f\n\n", 3.14675436);

	int my_age;
	my_age = 29;
	printf("%s is %d years old while %s is %d years old \n may they live as long as %s \n","Martin Mulang'",my_age, "Isaiah Onando", 35, "Ogago Nyalwanda\n");




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
        printf("%s shall be in my wedding. \nThat is a given because she is just %d years old\n", best_man, age);
	
	int datable_age = YEARS_ACTIVE - my_age;
	printf("I can date %s because I am %d within the datable age. \n This is because she is been active for %d years.\n\n\n", NAME, datable_age, YEARS_ACTIVE);



	char your_Name[20];
	char your_GF_Name[20];
	int number_of_Babies;
	
	printf("What is your Name sir?\n");
	scanf("%s", your_Name);

	printf("What is your Girlfriend's Name?\n");
        scanf("%s", your_GF_Name);
	
	printf("What is the number of children you wish to have? \n");
	scanf("%d", &number_of_Babies);
	
	printf("%s you are most likely to marry %s if you  are strongly in love. \n If you hit it right, you the your wish of having %d shall be granted. \n MAY THE FOROORCE BE WITH YOU", your_Name, your_GF_Name, number_of_Babies);
};
