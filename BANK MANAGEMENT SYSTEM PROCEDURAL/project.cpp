#include<iostream>
#include "project.h"
using namespace std;
int main() {
	int op,choice;
	char opt;
	repeat:
	cout<<"HOME PAGE:\n"<<endl;
	cout<<"1. LAB MANUAL 2"<<endl;
	cout<<"2. LAB MANUAL 3"<<endl;
	cout<<"3. LAB MANUAL 4"<<endl;
	cout<<"4. LAB MANUAL 5"<<endl;
	cout<<"5. LAB MANUAL 6"<<endl;
	cout<<"6. LAB MANUAL 7"<<endl;
	cout<<"7. LAB MANUAL 8"<<endl;
	cout<<"8. LAB MANUAL 9"<<endl;
	cout<<"9. LAB MANUAL 10"<<endl;
	cout<<"10.LAB MANUAL 11"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>op;
	switch(op) {
		case 1:

			cout<<"Q1: Write a computer program to add,Subtract and multiply yhnumbers and display their results on the screen."<<endl;
			cout<<"Q2: Write a C++ program to convert the Celsius temperature to Fahrenheit."<<endl;
			cout<<"Q3: Write a program to calculate the radius of the circle"<<endl;
			cout<<"Q4: Write a program in C++ by taking the amount in rupees and convert it into dollars and print the result on the screen"<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l2p1();
					break;
				case 2:
					l2p2();
					break;
				case 3:
					l2p3();
					break;
				case 4:
					l2p4();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		case 2:
			cout<<"Q1: Write a program in C++ to get the marks of the students in three subjects programming Fundamentals,Digital Logic Design and cicuit Analysis. Calculate the total and average marks.Each subject has Maximum of 100 marks."<<endl;
			cout<<"Q2: Write a program in C++ to compute and print the volume of a cylinder."<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l3p1();
					break;
				case 2:
					l3p2();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		case 3:
			cout<<"Q1:  Write a program to input a number from keyboard and then print the message It is an odd number if it is an odd number else print “it is an even number."<<endl;
			cout<<"Q2:  Write a program to input two integer and then find out whether both numbers are divisible by 2 or not. If they are divisible print the message numbers are divisible  else print numbers are not divisible."<<endl;
			cout<<"Q3: Write a program to find out the grade of the student based on the marks obtained in three subjects. The grade is calculated as: 1. If the average is greater than 80 grade is A. 2. If average is less than 80 and greater than 50 grade is B. 3. If average is less than 50 and greater than 33 then the grade is  C 4. If average is less than 33 grade is F."<<endl;
			cout<<"Q4: Write a program in C++ to input 4 integers. Find out the largest value and then print it on the screen by using nested if structure."<<endl;
			cout<<"Q5: Write a program that prompts the user to input a number. The program should then output the number and a message saying whether the number is positive, negative, or zero."<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l4p1();
					break;
				case 2:
					l4p2();
					break;
				case 3:
					l4p3();
					break;
				case 4:
					l4p4();
					break;
				case 5:
					l4p5();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		case 4:
			cout<<"Q1: Write a program to print first ten whole numbers. "<<endl;
			cout<<"Q2: Write a program to find out the largest number from the three given numbers."<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l5p1();
					break;
				case 2:
					l5p2();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		case 5:
			
			cout<<"Q1. Write a program to print the multiplication table of a number entered from the keyboard"<<endl;
			cout<<"Q2. Write a program to calculate whether the number entered is prime or not. (using for loop)"<<endl;
			cout<<"Q3. Write a program that inputs a no. and check whether it’s a perfect no. or not. "<<endl;
			cout<<"Q4. Write a program to print  numbers in descending order. (using while loop)"<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l6p1();
					break;
				case 2:
					l6p2();
					break;
				case 3:
					l6p3();
					break;
				case 4:
					l6p4();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		case 6:
			cout<<"Q1: Write a program that inputs a sentence from the user and counts the no. of words and characters in the sentence using while loop only."<<endl;
			cout<<"Q2: Write a program that inputs a no. and check whether it’s a palindrome or not. i.e 4994 using do while."<<endl;
			cout<<"Q3: Write a program to find the sum of the following series: 1/3+3/5+5/7+………97/99 using do while only"<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l7p1();
					break;
				case 2:
					l7p2();
					break;
				case 3:
					l7p3();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		case 7:
			cout<<"Q1: 1. Write a program to print the output as shown below."<<endl;
			cout<<"1"<<endl;
			cout<<"1 2"<<endl;
			cout<<"1 2 3 "<<endl;
			cout<<"1 2 3 4"<<endl;
			cout<<"1 2 3 4 5"<<endl;
			cout<<"Q2: 2. Write a program to print the output as shown below. "<<endl;
			cout<<"*"<<endl;
			cout<<"* *"<<endl;
			cout<<"* * *"<<endl;
			cout<<"* * * *"<<endl;
			cout<<"* * * * *"<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l8p1();
					break;
				case 2:
					l8p2();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		case 8:
			cout<<"Q1: Write a program that inputs five value from the user. Calculate the sum and average of the elements and then print the sum and average on the screen."<<endl;
			cout<<"Q2: Write a C++ program which get a date and a number of days from user and add number of days in date and display new date and day on new date."<<endl;
			cout<<"Q3: Write a program that inputs 10 no.s from the user in array and print the maximum value in array."<<endl;
			cout<<"Q4: Write a program that initializes an array of twelve elements. It inputs a value from the user and search & display that entered value in array. It displays the index of that found value as well. If the entered number is not found in the array, display the message “Number not found”."<<endl;
			cout<<"Q5: Write a program to input values into an array. Find out the total number of odd and even values entered in the array ."<<endl;
			cout<<"Q6: Write a program that initializes a two dimensional array of 2 rows and 4 columns and then display the minimum and maximum number in the array."<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l9p1();
					break;
				case 2:
					l9p2();
					break;
				case 3:
					l9p3();
					break;
				case 4:
					l9p4();
					break;
				case 5:
					l9p5();
					break;
				case 6:
					l9p6();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		case 9:
			cout<<"Q1: Write a program inputs a no. and a character in main function and passes them to a function. It then displays a square of that entered character against the no. of rows user entered"<<endl;
			cout<<"Q2: Write a program to sort an array in ascending order "<<endl;
			cout<<"Q3: Write a program for calculator that input two no.s and one arithmetic operator in main function and pass them to a function. The function applies arithmetic operation on two numbers on the basis of the operator entered by the user using switch statement"<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l10p1();
					break;
				case 2:
					l10p2();
					break;
				case 3:
					l10p3();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		case 10:
			cout<<"Q1: Write a program to define a structure with 4 members. The first member be student name and the other member be student marks obtained in subjects. Input values from the user. Add the marks of the subject and calculate the total marks and then print these numbers and total marks of the student. "<<endl;
			cout<<"Q2: Write a program to input data for 6 students and each student has following data to be stored. "<<endl;
			cout<<"1. Name of Student"<<endl;
			cout<<"2. Age of Student. "<<endl;
			cout<<"3. Phone No."<<endl;
			cout<<"4. Father Name."<<endl;
			cout<<"Also display the input data."<<endl;
			cout<<"What is your choice?"<<endl;
			cin>>choice;
			switch(choice) {
				case 1:
					l11p1();
					break;
				case 2:
					l11p2();
					break;
				default:
					cout<<"Wrong Choice"<<endl;
			}
			break;
		default:
			cout<<"Wrong Choice"<<endl;
	}
	
	cout<<"Do you want to go to homepage again?(y/n)"<<endl;
	cin>>opt;
	if(opt=='y' || opt=='Y')
{
	system("cls");
	goto repeat;
	
}
	else if(opt=='n' || opt=='N')
	{
	return 0;
	}
	else
	{
		cout<<"Wrong Choice";
	}
	return 0;
}