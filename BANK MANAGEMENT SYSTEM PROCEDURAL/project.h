#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
//MANUAL 02
void l2p1() {
//	subrt mult
	int num,sum=0;
	cout<<"How many numbers you want to add?"<<endl;
	cin>>num;
	int n1[num];
	cout<<"Enter the numbers you want to add:"<<endl;
	for(int i=1; i<=num; i++) {

		cin>>n1[i];
		sum=sum+n1[i];
	}
	cout<<"The sum is:"<<sum<<endl;
}
void l2p2() {
	int c,f;
	cout<<"Enter the temperature in celsius"<<endl;
	cin>>c;
	f=(c*9)/5+32;
	cout<<"The temperature in Farhenheit is = "<<f<<endl;
}
void l2p3() {
	float d,r;
	cout<<"Enter the diameter of circle"<<endl;
	cin>>d;
	r=d/2;
	cout<<"The Radius of Circle with the help of diameter:"<<r<<endl;
}
void l2p4() {
	float Dollar,Rupees;
	cout<<"Enter the Amount of Money in Rupees"<<endl;
	cin>>Rupees;
	Dollar = Rupees/178.50;
	cout<<"The Money in Dollars is = "<<Dollar<<endl;
}
//MANUAL 03
void l3p1() {
	int sub1,sub2,sub3,Marks;
	float avg;
	cout<<"enter marks of "<<endl;
	cout<<"1. Programming fundamentals:";
	cin>>sub1;
	cout<<"2. Digital Logic Design:";
	cin>>sub2;
	cout<<"3. Circuit Analysis:";
	cin>>sub3;

	Marks=(sub1+sub2+sub3);

	cout<<"total marks  of 3 Subjects is " << Marks << endl;

	avg= Marks/3;

	cout<< "Average marks in 3 Subjects is " << avg << endl;
}
void l3p2() {
	float r,h,vol;
	cout<<"Enter Radius of the Cylinder is "<<endl;
	cin>>r;
	cout<<"Enter Height of the Cylinder is "<<endl;
	cin>>h;
	vol= 3.14*h*r*r;
	cout<<"Volume of the Cylinder is " << vol << endl;
}


//manual 4
void l4p1() {
	int no,choice;
	cout<<"Enter a Number to find whether its even or odd"<<endl;
	cout<<"Number=";
	cin>>no;
	if(no%2==0)
		cout<<"Even number"<<endl;
	else
		cout<<"Odd Number"<<endl;
}
void l4p2() {
	int no1,no2;
	cout<<"Enter a Number"<<endl;
	cout<<"a=";
	cin>>no1;
	cout<<"b=";
	cin>>no2;
	if(no1%2==0 && no2%2==0)
		cout<<"Both numbers are divisible by 2"<<endl;
	else
		cout<<"Numbers are not divisble"<<endl;
}
void l4p3() {
	int eng,phy,chem,avg,sum,per,total;
	cout<<"Enter the total marks of each subject"<<endl;
	cin>>total;
	cout<<"Enter Marks in English= ";
	cin>>eng;
	cout<<"Enter Marks in Urdu= ";
	cin>>phy;
	cout<<"Enter Marks in Mathematics= ";
	cin>>chem;
	sum=eng+phy+chem;
	avg=sum/3;
	per=(sum*100)/(total*3);

	if(per>=90 && per<100)
		cout<<"YOU GOT A+ GRADE "<<endl;
	else if(per>=80 && per<90)
		cout<<"YOU GOT A GRADE "<<endl;
	else if(per>=70 && per<80)
		cout<<"YOU GOT B GRADE "<<endl;
	else if(per>=60 && per<70)
		cout<<"YOU GOT C GRADE "<<endl;
	else if(per>=50 && per<60)
		cout<<"YOU GOT D GRADE "<<endl;
	else if(per<50)
		cout<<"YOU GOT F GRADE "<<endl;
	cout<<endl;
}
void l4p4() {
	int a,b,c,d,max;
	cout<<"\tEnter The Numbers to find the Greatest Number"<<endl;
	cout<<"\tEnter The Number A"<<endl;
	cout<<"\t";
	cin>>a;
	cout<<"\tEnter The Number B"<<endl;
	cout<<"\t";
	cin>>b;
	cout<<"\tEnter The Number C"<<endl;
	cout<<"\t";
	cin>>c;
	cout<<"\tEnter The Number D"<<endl;
	cout<<"\t";
	cin>>d;
	if(a>b) {
		max=a;
	} else {
		max=b;
	}
	if(c>max) {
		max=c;
	}
	if(d>max) {
		max=d;
	}
	cout<<"\tThe Greatest Number is = "<<max<<endl;
}
void l4p5() {
	int num;
	cout<<"Enter a Number to find it is Positive or Negative"<<endl;
	cout<<"Number=";
	cin>>num;
	if(num>0)
		cout<<"It is a Positive Number";
	else if(num<0)
		cout<<"It is a Negative Number";
	else
		cout<<"It is zero"<<endl;
	cout<<endl;
}
//manual 5
void l5p1() {
	cout<<"Printing first ten whole numbers"<<endl;
	goto abc;
	cout<<"using goto statement"<<endl;
abc:
	for(int i=0; i<=10; i++)
		cout<<i<<" ";
}
void l5p2() {
	int n1,n2,n3;
	cout<<"Please enter Three integers"<<endl;
	cin>>n1>>n2>>n3;
	if(n1>n2 && n1>n3)
		cout<<"Greatest Number="<<n1<<endl;
	else if(n2>n1 && n2>n3)
		cout<<"Greatest Number="<<n2<<endl;
	else
		cout<<"Greatest Number="<<n3<<endl;
}
//manual 6
void l6p1() {
	int tnum ;
	cout<<"Enter the Number You want to print table of ";
	cin>>tnum;
	for(int i=1; i<=10 ; i++) {
		cout<<tnum<<" x "<<i<<" = "<<tnum*i<<endl;
	}
}
void l6p2() {
	int pnum, p = 0;
	cout << " Input a number to check prime or not: ";
	cin>> pnum;
	for (int i = 2; i <= pnum; i++) {
		if (pnum % i == 0)
			{
				p=p+1;	
			}
	}
	if (p == 1)
		cout << " The entered number is a prime number. \n";
	else
		cout << " The number you entered is not a prime number. \n";
	cout<<endl;
}
void l6p3() {
	int perfectnum,sum=0;
	cout<<"Enter the  number to check its perfect or not =";
	cin>>perfectnum;
	for(int i=1; i<=perfectnum/2; i++) {
		if(perfectnum%i==0)
			{
			sum=sum+i;}
	}
	if(sum==perfectnum)
		{
		cout<<"The Number you entered is perfect"<<endl;}
	else
		{
		cout<<"The Number is not perfect"<<endl;}
	cout<<endl;
}
void l6p4() {
	int n;
	cout<<"Enter the Number from which you want to print numbers in descending order"<<endl;
	cin>>n;
	int i=n;
	while(i>=1) {
		cout<<i<<endl;
		i--;
	}
}
//	lab manual 7
	void l7p1() {
		int p=0,q=1;
		cout<<"Please enter sentence\n";
		char ch;
		while(ch!='\r') {
			ch=getche();
			if(ch==' ')
				q++;
			else
				p++;
		}

		cout<<"No of words are:"<<q<<endl;
		cout<<"No of characters:"<<p-1<<endl;

	}
	void l7p2() {
		int n,num,rev=0,remainder;
		cout<<"Please enter any Number:"<<endl;
		cin>>num;
		n=num;
		do {
			remainder=num%10;
			rev=(rev*10)+remainder;
			num=num/10;
		} while(num!=0);
		cout<<"The Reverse number is="<<rev<<endl;
		if(n==rev)
			cout<<"The number is Palindrome"<<endl;
		else
			cout<<"The number is not Palindrome"<<endl;
	}
	void l7p3() 
	//series
	{
		float n1=1,n2=3,sum=0;
		do {
			sum=sum+(n1/n2);
			n1=n1+2;
			n2=n2+2;
		} while(n1<=97);
		cout<<sum<<endl;
	}
//lab manual 8
void l8p1(){
	int m,k;
		cout<<"enter  number of rows=";
		cin>>m;
		for(int i=1; i<=m; i++) {
			k=1;
			for(int j=1; j<=i; j++) {
				cout<<k;
				k=k+1;
			}
			cout<<endl;
		}
	}
void l8p2() {
		int no;
		cout<<"Enter  Number of rows ="<<endl;
		cin>>no;
		for(int i=1; i<=no; i++) {
			for(int j=1; j<=i; j++)
				cout<<"*";
			cout<<endl;
		}
	}
//manual 09
	void l9p1() {
		int arr[10], sum=0;
		float avg=0;
		cout<<"Enter ten  values: ";
		for(int m=0; m<10; m++) {
			cin>>arr[m];
		}
		for(int p=0; p<10; p++)
			sum+=arr[p];

		avg = sum/10;
		cout<<"Sum is: "<<sum;
		cout<<"\n Average is: "<<avg<<endl;
	}
	void l9p2() {
	int date,mon,year,add;
//	date=d mon=m year=y add=ne
	cout<<"Enter date:"<<endl;
	cin>>date;
	cout<<"Enter Month:"<<endl;
	cin>>mon;
	cout<<"Enter year:"<<endl;
	cin>>year;
	cout<<"Enter the number of days you want to add:"<<endl;
	cin>>add;

	int tmd[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
//	tmd=total months days
	int i,rem,fmon,total=0;
//	tmd=m2 array total=k rem=p fmon=a
	for(i=0; i<mon; i++) {
		total += tmd[i];
	}
	total+=date+add;

	if(total<=365) {
		for(i=0; i<13; i++) {
			rem=total-tmd[i];

			if(rem<=tmd[i+1]) {
				fmon=i+1; //fmon= final month
				break;
			} else
				total=rem;
		}
		cout<<rem<<"/"<<fmon<<"/"<<year<<endl;
	} else {
		total-=365;
		for(i=0; i<13; i++) {
			rem=total-tmd[i];


			if(rem<=tmd[i+1]) {
				fmon=i+1;
				break;
			} else
				total=rem;
		}
		cout<<rem<<"/"<<fmon<<"/"<<year+1<<endl;
	}
	}
	void l9p3() {
		int arr[10];
		cout<<"Enter Ten numbers consecutively: ";
		for(int e=0; e<10; e++)
			cin>>arr[e];
		for(int e=0; e<10; e++) {
			if(arr[0]<arr[e])
				arr[0]=arr[e];
		}
		cout<<"Maximum  is: "<<arr[0]<<endl;
	}
	void l9p4() {
	

//		searching in an array 
		int n,i,a[10],index;
	int ch='n';
	
	for (i=0;i<=9;i++){
		cout<<"\tEnter The Numbers = ";
		cin>>a[i];
	}
	cout<<"---------------------------------------------------"<<endl;
	cout<<"\tEnter Any Number You Want to Search = ";
	cin>>n;
	for (i=0;i<=9;i++){
		if (n==a[i])
		{
		ch='y';
		index=i;}
		
	}
	if (ch=='y'){
		cout<<"-----------------------------------------------"<<endl;
	cout<<"\tThe Number Is Found = "<<n<<endl;
	cout<<"\tits indexi is "<<index<<endl;
	
	}else
	cout<<"\t\tThe Number IS Not FOund"<<endl;
	
}

//	void l9p4() {
//		searching in an array
void l9p5(){
	 int arr[100];
    int i,size,odd=0,even=0;

    //input the size of the array
    cout<<"Enter size of the array\n";
    cin>>size;//read input from the user for array size

    //input the array elements
    cout<<"\nEnter elements of the array\n\n";


    for(i=0; i<size; i++)
    {
        cout<<"Enter the element arr["<<i<<"] :";
        cin>>arr[i];//read input from the user for array elements

    }


    for(i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }

    }

    cout<<"\nTotal even numbers of an array :"<<even<<"\n";
    cout<<"Total odd numbers of an array : "<<odd<<endl;
     getch();
}
void l9p6(){
	int A[3][3];
    int Min, Max;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        	cout<<"\tEnter The Numbers = ";
            cin>>A[i][j];
        }
    }
    Max = A[0][0];
    Min = A[0][0];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<A[i][j]<<" ";

            if (A[i][j] > Max)
            {
                Max = A[i][j];
            }
            if (A[i][j] < Min)
            {
                Min = A[i][j];
            }
        }
        cout<<endl;
    }
    cout<<"Maximum Number is : "<<Max<<endl;
    cout<<"Minimum Number is : "<<Min<<endl;
}
		
//	p5 pp6 wrong 

//manual 10
	void l10p1() {
		int size;
		char ch;
		cout<<"Enter a character whose Square you want to Print"<<endl;
		cin>>ch;
		cout << " Input the number of characters for a side: ";
		cin >> size;
		for (int row = 1; row <= size; ++row) {
			for (int col = 1; col <= size; ++col) {
				cout <<ch<<" ";
			}
			cout << endl;
		}
	}
	void l10p2() {
		int arr[100];
		int size, i, j, temp;
		cout<<"Enter size of array: ";
		cin>>size;
		cout<<"Enter elements in array: ";
		for(i=0; i<size; i++) {
			cin>>arr[i];
		}
		for(i=0; i<size; i++) {
			for(j=i+1; j<size; j++) {

				if(arr[j] < arr[i]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		cout<<"Elements of array in sorted ascending order:"<<endl;
		for(i=0; i<size; i++) {
			cout<<arr[i]<<endl;
		}
	}
	void l10p3() {
		char op;
		float num1, num2;
		cout << "Enter an arithemetic operator(+ - * /)\n";
		cin >> op;
		cout << "Enter two numbers as operands\n";
		cin >> num1 >> num2;

		switch(op) {
			case '+':
				cout << num1 << " + " << num2 << " = " << num1+num2<<endl;
				break;
			case '-':
				cout << num1 << " - " << num2 << " = " << num1+num2<<endl;
				break;
			case '*':
				cout << num1 << " * " << num2 << " = " << num1*num2<<endl;
				break;
			case '/':
				cout << num1 << " / " << num2 << " = " << num1/num2<<endl;
				break;
			default:
				printf("ERROR: Does not support Operation");
		}
	}
//mANUAL 11
	void l11p1() {
		struct student {
			char name[15];
			int roll;
			float marksinPF;
			float marksinICT;
			float marksinBE;
			float totalmarks;
		};
		student s;
		cout<<"Enter Information," <<endl;
		cout<<"Enter Name : ";
		cin>>s.name;
		cout<<"Enter Roll Number : ";
		cin>>s.roll;
		cout<<"Enter marks of PF : ";
		cin>>s.marksinPF;
		cout<<"Enter marks in ICT : ";
		cin>>s.marksinICT;
		cout<<"Enter marks in BE : ";
		cin>>s.marksinBE;
		s.totalmarks=s.marksinPF+s.marksinICT+s.marksinBE;


		cout<<"\n\nDisplayInformation,\n "<<endl;
		cout<<"Name : "<<s.name<<endl;
		cout<<"Roll No : "<<s.roll<<endl;
		cout<<"Total Marks : "<<s.totalmarks<<endl;
	}
	void l11p2() {
		struct student {
			char name[15];
			int age;
			int phone;
			char fathername[15];
		};
		student s;
		for(int i=0; i<=4; i++) {
			cout<<"name:";
			cin>>s.name;
			cout<<"age:";
			cin>>s.age;
			cout<<"phone number:";
			cin>>s.phone;
			cout<<"father name:";
			cin>>s.fathername;
			cout<<endl;

		}
	}
