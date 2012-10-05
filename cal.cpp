#include<iostream.h>
#include<stdio.h>
#include<alloc.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<iomanip.h>

     //GLOBAL VARIABLES
      float a,b,c,d,e,f,g,h;
      double r;
      int n,x,z;
      char y;
      char ans;

//USER DEFINED FUNCTIONS
void welc_scr();
void add(int x);                  //FUNCTION FOR ADDITION OF 2 OR MORE NOS.
void sub(float a, float b);        //FUNCTION FOR SUBTRACTION OF 2 NOS.
void mul(int x);                  //... FOR MULTIPLICATION OF 2 OR MORE NOS.
void div(float a,float b);         //... FOR DIVISION OF 2 NOS.
void fact(int x);                  //... FOR FINDING FACTORIAL OF A NATURAL NO.
void sqr(float a);                 //... FOR SQUARING A NO.
void sqr_rt(double a);             //...FOR FINDING SQUARE ROOT OF A NO.
void trg(float a);                 //TRIGNOMETRIC FUNCTION
void a_p(float a,float d,int n);   //ARITHMETIC PROGRESSION
void powr(int x,int z);            //EXPONENTIAL FUNCTION
void log_n(float a);               //NATURAL LOGARITHMIC FUNCTION
void log_10(float a);              //LOGRARITHMIC(BASE 10) FUNCTION
void quad(float a,float b, float c); //QUADRATIC EQUATION
void permutation(int n,int x);      // CALC.  PERMUTATION
void combination(int n,int x);      // CALC. COMBINATION

void main()                          // <- MAIN STARTS HERE
{
  welc_scr();                   //FUNCTION FOR SHOWING WELCOME SCREEN

     do
     { clrscr();
       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t INITIALISING......... ";
       delay(1000);
     clrscr();
     cout<<"\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!***************************!!!!!!!!!!!!!!!!!!!!!!!!!!";

     cout<<"\n\n\n\t\tADDITION-------------------> PRESS 1\n\n";
     cout<<"\t\tSUBTRACTION----------------> PRESS 2\n\n";
     cout<<"\t\tMULTIPLICATION-------------> PRESS 3\n\n";
     cout<<"\t\tDIVISION-------------------> PRESS 4\n\n";
     cout<<"\t\tFACTORIAL------------------> PRESS 5\n\n";
     cout<<"\t\tSQUARE---------------------> PRESS 6\n\n";
     cout<<"\t\tSQUARE ROOT----------------> PRESS 7\n\n";
     cout<<"\t\tTRIGNOMETRIC RATIOS--------> PRESS 8\n\n";
     cout<<"\t\tARITHMETIC PROGRESSION-----> PRESS 9\n\n";
     cout<<"\t\tX -RAISED TO THE POWER- Y -> PRESS 10\n\n";
     cout<<"\t\tLOGARITHM------------------> PRESS 11\n\n";
     cout<<"\t\tQUADRATIC EQUATION---------> PRESS 12\n\n";
     cout<<"\t\tPERMUTATION----------------> PRESS 13\n\n";
     cout<<"\t\tCOMBINATION----------------> PRESS 14\n\n";
     cout<<"\t\tCALCULUS-------------------> PRESS 15\n\n";
     cout<<"\t\t\nEXIT----------> PRESS 0\n\n";
     cout<<"\nENTER THE NUMBER \n ";
     cin>>x;
     cout<<"\n";
     switch (x)
     {
      case 0:
	cout<<"\n\n\t\t\tU R Exiting ";
	delay(1200);
	exit(0);

     case 1:
       clrscr();

       cout<<"\n\nHow Many Numbers You Want To Add ?";
       cin>>x;
       add(x);                       //......  CALLING ADD()
       break;

       case 2:
       cout<<"enter 1st no. ";
       cin>>a;
       cout<<"enter 2nd no. ";
       cin>>b;
       sub(a,b);                    //......  CALLING SUB()
       break;

       case 3:
       cout<<"How Many No. You Want To Multiply ?";
       cin>>x;
       mul(x);                     //......  CALLING MUL()
       break;

       case 4:
       cout<<"enter 1st no. ";
       cin>>a;
       cout<<"enter 2nd no. ";
       cin>>b;
       if(b!=0)
       div(a,b);
       else
	cout<<" \n\n\tThe Result is UNDEFINED";                   //......  CALLING DIV()
       break;

       case 5:
       cout<<"Enter the No. ";
       cin>>a;
       fact(a);                   //......  CALLING FACT()
       break;

	 case 6:
	 cout<<"Enter the No. ";
	 cin>>a;
	 sqr(a);                 //......  CALLING SQR()
	 break;

	case 7:
	cout<<"Enter the No. ";
	cin>>r;
	sqr_rt(r);              //......  CALLING SQR_RT()
	break;

       case 8:

	cout<<"Enter The Value For Trignometric Ratios (IN DEGREES) ";
	cin>>a;
	trg(a);                //......  CALLING TRG()
	break;

	case 9:
	cout<<"\nEnter First term  ";
	cin>>a;
	cout<<"\nEnter Common difference  ";
	cin>>d;
	cout<<"\nEnter No. of terms  ";
	cin>>x;
	a_p(a,d,x);             //......  CALLING A_P()
	break;

	case 10:
	cout<<"\nEnter the BASE -> ";
	cin>>x;
	cout<<"\nEnter the POWER -> ";
	cin>>z;
	powr(x,z);               //......  CALLING POWR()
	break;

	case 11:
	cout<<" For natural log -> a \n For log(base 10) - b\n";
	cin>>y;
	switch(y)
	{
	 case 'a':

	 cout<<"Enter the No. You Want to find the NATURAL LOGARITHM of ->";
	 cin>>a;
	 if(a>0)
	log_n(a);                   //.....CALLING LOG_N()
	else cout<<"Value of 'a' MUST be  > 0 ";

	break;

	case 'b':

	cout<<"Enter the No. You Want to find the LOGARITHM(BASE 10) of ->";
	 cin>>a;
	 if(a>0)
	log_10(a);                   //.....CALLING LOG_10()
	else cout<<"Value of 'a' MUST be  > 0 ";
	break;

	default:
	 cout<<"\nEnter correct values ";
       }
	break;

	case 12:
	cout<<"\nEnter the Coefficient of x^2 -> ";
	cin>>a;
	cout<<"\nEnter the Coefficient of x -> ";
	cin>>b;
	cout<<"\nEnter the Constant term -> ";
	cin>>c;
	if(a!=0)
	quad(a,b,c);            //......CALLING QUAD()
	else
	 cout<<"\n\n\tIt isn't a QUAD. Eqn.The Value of a must be > 0 ";
	break;

	case 13:
	cout<<"\nYou are Going to Calculate the PERMUTATION nPr ->\n\nEnter The Value of n -> ";
	cin>>n;
	cout<<"\nEnter the Value of r -> ";
	cin>>x;
	if(n>=x)
	permutation(n,x);        //......CALLING PERMUTATION()

	else cout<<"\n\n\tValue of r CANNOT be greater than n ";
	break;

	case 14:
	cout<<"\nYou are Going to Calculate the COMBINATION nCr ->\n\nEnter The Value of n -> ";
	cin>>n;
	cout<<"\nEnter the Value of r -> ";
	cin>>x;
	if(n>=x)
	combination(n,x);        //......CALLING COMBINATION()

	else cout<<"\n\n\tValue of r CANNOT be greater than n ";
	break;

	case 15:
	  cout<<"\n\tEnter 1- for Simple DIFFERENTIATION\n\n\tEnter 2- for Simple INTEGRATION\n";
	  cin>>z;
	  clrscr();
	  switch(z)
	     {
	       case 1:
		 cout<<"\n\n\t\t\t!DIFERENTIATION!";
		 cout<<"\n\nEnter the highest order of eq. -> ";
		cin>>x;

		cout<<"\nThe eq. will look like this ->\n\n";

		int i=x;
		n=97;
		  while(i>=0)
		{
		  cout<<char(n)<<" x^"<<i;
		  if(i!=0)
		  cout<<" + ";
		  i--;
		  n++;
		}

	   int j=0,p[10],num;
	   i=x,n=97;
	    while(i>=0)
		{
		cout<<"\n\nEnter the value of "<<char(n)<<" -> ";
		cin>>p[j];
		j++;
		i--;
		n++;
		}
	  cout<<"\n\nEnter the value of x-> ";
	 cin>>num;

	 j=0;i=x;
	   int c=0;
	   while(i>=0)
	  {
		 c=c+p[j]*i*pow(num,i-1);
		 i--;
		 j++;
		}
	 cout<<"\nThe value of differentiation = "<<c;
	   break;

	  case 2:
	  int a1,a2;
	 float q[10];
	 cout<<"\n\n\t\t\t!INTEGRATION!";
	  cout<<"\n\nEnter the highest order of eq. -> ";
	 cin>>x;

	  cout<<"\nThe eq. will look like this ->\n\n";

	 i=x,n=97;
	  while(i>=0)
		{
	  cout<<char(n)<<" x^"<<i;
	  if(i!=0)
	  cout<<" + ";
	  i--;
	  n++;
	  }

	    j=0;
	   i=x,n=97;
	    while(i>=0)
	      {
		cout<<"\n\nEnter the value of "<<char(n)<<" -> ";
		cin>>q[j];
		j++;
		i--;
		n++;
	      }
	    cout<<"\nEnter the lower limit -> ";
	  cin>>a1;
	  cout<<"\nEnter the upper limit -> ";
	  cin>>a2;

	   j=0;i=x;
	   float y=0;
	   while(i>=0)
	      {
		 y=y+(q[j]/(i+1))*(pow(a2,i+1)-pow(a1,i+1));
		 i--;
		 j++;
	       }
	    cout<<"\n\nThe value of integration = "<<setprecision(2)<<y;
	 break;

	 default:
	  cout<<"\nEnter Correct Values";

       }
     break;


	default:
	 cout<<"\nEnter correct values ";

     }
	 cout<<"\n\n\n\n want to cont.. (y/n)";      /*STATEMENT OF THE
						       DO-WHILE LOOP*/

      cin>>ans;


 }

    while (ans=='y');				       /*CONDITION OF THE
						       DO-WHILE LOOP*/
}


void welc_scr()
  {
     clrscr();
     cout<<" \t\t***WELCOME TO MY MINI-CALCULATOR***\n\n";
     cout<<"\tCREATOR -  YEAR(EC)\n\n\n ";
     cout<<"\nFOR THE PROPER FUNCTIONING OF CALCULATOR ,ENTER CORRECT VALUES\n\n ";
     cout<<"\n\n GUIDANCE -i) Do not Enter any MATHEMATICAL OPERATOR in the Program\n\n\t   ii)Check that the CAPS LOCK is off\n\n ";
     cout<<"FOR FEEDBACK - eMAIL ID :-  \n\n ";
     cout<<"\n\t PRESS ANY KEY TO CONTINUE -  ";
     getch();


  }
void add(int x)
 {
    float *p;
    p=(float*) malloc(x*4);
    a=0;
    for(n=0;n<x;n++)
	{
	  cout<<"\n Enter the "<<n+1<<" num ->";
	  cin>>*(p+n);
	  a=a+(*(p+n));
	}
	cout<<"\n\n The sum of numbers = "<<a;
	cout<<"\n\n avg ="<<setprecision(3)<<(a/x);

     }

void sub(float a,float b)
 {
    c=a-b;
    cout<<"\n"<<a<<" - "<<b<<" = "<<c;
 }
void mul(int x)
 {
      float *p;
      p=(float *) malloc(x*4);
      a=1;
      for(n=0;n<x;n++)
	{
	   cout<<"\n Enter the "<<n+1<<" number ->";
	   cin>>*(p+n);
	   a=a*(*(p+n));
	 }
	cout<<"\n\n The product of numbers = "<<a;

 }
void div(float a,float b)
 {
    c=a/b;
    cout<<" division  is = "<<setprecision(2)<<c;
 }
void fact(int a)
 {
    long fact=1;
       int i=1;
       while (i<=a)
	 {
	  fact=fact*i;
	   i++;
	 }
	 cout<<"Factorial is = "<<fact;
 }
void sqr(float a)
 {
     c=a*a;
     cout<<" Square of "<<a<<" = "<<c;
 }
void sqr_rt(double r)
 {
   c=sqrt(r);
   cout<<"square root of "<<r<<" = "<<setprecision(3)<<c;
 }
void trg(float a)
 {
   long double i;
   i=((a*3.141592653)/180);
   {
	if(fabs(sin(i))<pow(10,-8))
	cout<<"\nValue of SIN "<<a<<" is = 0 ";
	else if(fabs(sin(i))>pow(10,8))
	cout<<"\nValue of SIN "<<a<<" is = INFINITE VALUE ";
	else
	cout<<"\nValue of SIN "<<a<<" is = "<<sin(i)<<setprecision(4);
   }

   {
	if(fabs(cos(i))<pow(10,-8))
	cout<<"\nValue of COS "<<a<<" is = 0 ";
	else if(fabs(cos(i))>pow(10,8))
	cout<<"\nValue of COS "<<a<<" is = INFINITE VALUE ";
	else
	cout<<"\nValue of COS "<<a<<" is = "<<cos(i)<<setprecision(4);

   }

   {
	if(fabs(tan(i))<pow(10,-8))
     cout<<"\nValue of TAN "<<a<<" is = 0 ";
	else if(fabs(tan(i))>pow(10,8))
     cout<<"\nValue of TAN "<<a<<" is = INFINITE VALUE ";
	else
    cout<<"\nValue of TAN "<<a<<" is = "<<tan(i)<<setprecision(4);
   }
 }
void a_p(float a,float d,int x)
 {
  c=a+((x-1)*d);
	b=((x*(a+c))/2);
	cout<<"\nThe sequence is = ";
	for(int i=a;i<=c;i=i+d)
	  {
	    cout<<i<<" , ";
	  }
	cout<<"\n\nThe term "<<x<<" is = "<<c;
	cout<<"\n\nThe Sum of "<<x<<" terms is = "<<b;
 }
void powr(int x,int z)
 {
  cout<<x<<" Raised to the power "<<z<<" = "<<pow(x,z);
 }
void log_n(float a)
 {
  cout<<"\nNATURAL LOG of "<<a<<" is "<<setprecision(3)<<log(a);
 }
void log_10(float a)
{
  cout<<"\nLOG(BASE 10) of "<<a<<" is "<<setprecision(3)<<log10(a);
}
void quad(float a,float b,float c)
 {
  e=(-b/(2*a));
  d=((b*b)-(4*a*c));

  if(d>0)
  {
  g=((sqrt(d))/(2*a));
  cout<<"\nTHE TWO ROOTS ARE -> `"<<e+g<<"' , `"<<e-g<<"'";
  }

  else if(d==0)
  cout<<"\n\n\t Only one Root is Possible"<<"\n\t ROOT IS -> '"<<e<<"'";

  else if(d<0)
  cout<<"\n\n\t ROOTS ARE IMAGINARY ";

}

void permutation(int n,int x)
{
  int i;
  z=n-x;

  long fact_n=1;
	i=1;
       while (i<=n)
	 {
	  fact_n=fact_n*i;
	   i++;
	 }


  long fact_z=1;
       i=1;
       while (i<=z)
	 {
	  fact_z=fact_z*i;
	   i++;
	 }
   cout<<"Value of "<<n<<"P"<<x<<" is = "<<(fact_n/fact_z);
 }

void combination(int n,int x)
{
  int i;
  z=n-x;

  long fact_n=1;
	i=1;
       while (i<=n)
	 {
	  fact_n=fact_n*i;
	   i++;
	 }

   long fact_x=1;
	i=1;
       while (i<=x)
	 {
	  fact_x=fact_x*i;
	   i++;
	 }


  long fact_z=1;
       i=1;
       while (i<=z)
	 {
	  fact_z=fact_z*i;
	   i++;
	 }
   cout<<"Value of "<<n<<"C"<<x<<" is = "<<(fact_n/(fact_z*fact_x));
 }