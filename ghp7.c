/*
1.Welcome User to the program that determines if the fictional university will accept their applications.
2.Obtain users SAT score
3.Save SAT Score
4.Obtain users high school average.
5.Save users highschool average.
6.Test to see if the students average is 1500 or if their average is over 95%.
	6a.If true display that they are accepted
	6b.If false go to step 7. 
7.Test to see if the students average is 1450 or higher and if their average is 85% or higher.
	7a.If true display that they are accepted
	7b.If false go to step 8.
8.Test to see if the students average is 1400 or higher and if their average is 86% or higher.
	8a.If true display that they are accepted.
	8b.If false go to step 9.
9.Test to see if the students average is 1350 or higher and if their average is 87% or higher.
	9a.If true display that they are accepted.
	9b.If false go to step 10.
10.Test to see if the students average is 1300 or higher and if their average is 88% or higher.
	10a.If true display that they are accepted.
	10b.If false go to step 11.
11.Test to see if the students average is 1250 or higher and if their average is 89% or higher.
	11a.If true display that they are accepted.
	11b.If false go to step 12.
12.Test to see if the students average is 1200 or higher and if their average is 90% or higher.
	12a.If true display that they are accepted.
	12b.If false go to step 13.
13.Test to see if the students average is 1150 or higher and if their average is 91% or higher.
	13a.If true display that they are accepted.
	13b.If false go to step 14.
14.Test to see if the students average is 1100 or higher and if their average is 92% or higher.
	14a.If true display that they are accepted.
14b.If false go to step 15.
15.Test to see if the students average is 1050 or higher and if their average is 93% or higher. 
	15a.If true display that they are accepted.
	15b.If false go to step 16.
16.Test to see if the students average is 1000 or higher and if their average is 94% or higher.
	16a.If true display that they are accepted.
	16b.If false go to step 17.
17.If false display that they have been declined.
18.Terminate

*/


#include <stdio.h>
int main(void){

	int sat = 0;
	float hsavg = 0.0;

	//1.Welcome User to the program that determines if the fictional university will accept their applications.
	printf("Welcome!This program will help determine if the student can make it to this university.\n");

	//2.Obtain users SAT score
	printf("\nPlease enter the student's SAT score: ");

	//3.Save SAT Score
	scanf("%d" , &sat);

	//4.Obtain users high school average.
	printf("Please enter the student's high school average: ");

	//5.Save users highschool average.
	scanf("%f", &hsavg);

	//6.Test to see if the students average is 1500 or if their average is over 95%.
	if(sat >= 1500 || hsavg >= 95 ){

	//6a.If true display that they are accepted
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);
	}

	//7.Test to see if the students average is 1450 or higher and if their average is 85% or higher.
	else if(sat >= 1450 && hsavg >= 85)

	//7a.If true display that they are accepted
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//8.Test to see if the students average is 1400 or higher and if their average is 86% or higher.
	else if(sat >= 1400 && hsavg >= 86)

	//8a.If true display that they are accepted.
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//9.Test to see if the students average is 1350 or higher and if their average is 87% or higher.
	else if(sat >= 1350 && hsavg >= 87)

	//9a.If true display that they are accepted.
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//10.Test to see if the students average is 1300 or higher and if their average is 88% or higher.
	else if(sat >= 1300 && hsavg >= 88)

	//10a.If true display that they are accepted.
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//11.Test to see if the students average is 1250 or higher and if their average is 89% or higher.
	else if(sat >= 1250 && hsavg >= 89)

	//11a.If true display that they are accepted.
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//12.Test to see if the students average is 1200 or higher and if their average is 90% or higher
	else if(sat >= 1200 && hsavg >= 90)

	//12a.If true display that they are accepted.
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//13.Test to see if the students average is 1150 or higher and if their average is 91% or higher.
	else if(sat >= 1150 && hsavg >= 91)

	//13a.If true display that they are accepted.
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//14.Test to see if the students average is 1100 or higher and if their average is 92% or higher.
	else if(sat >= 1100 && hsavg >= 92)

	//14a.If true display that they are accepted.
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//15.Test to see if the students average is 1050 or higher and if their average is 93% or higher.
	else if(sat >= 1050 && hsavg >= 93)

	//15a.If true display that they are accepted.
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//16.Test to see if the students average is 1000 or higher and if their average is 94% or higher.
	else if(sat >= 1000 && hsavg >= 94)

	//16a.If true display that they are accepted.
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is accepted to the University.", sat, hsavg);

	//17.If false display that they have been declined.
	else{
	printf("Based on your SAT score of %d and your HS Avg of %.2f, the applicant is not accepted to the University.", sat, hsavg);
	}

	//18.Terminate
	return 0;
}
