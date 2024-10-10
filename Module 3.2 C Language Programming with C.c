
//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Divison, Modulo)

#include <stdio.h>
#include <math.h>
int main() 
{
    int First_Number,Second_Number;
    char choice,choice2,Yes;
    up:
    printf("\n '+'");
    printf("\n '-'");
    printf("\n '*'");
    printf("\n '/'");
    printf("\n 'm' for Reminder");
    printf ("\n Choose your action from above: ");
    scanf (" %c",&choice);
    
    switch(choice)
    {
        case '+':
        printf ("\nPlease Enter First Number =>"); scanf("%d",&First_Number);
        printf ("\nPlease Enter Second Number =>"); scanf("%d",&Second_Number);
        printf ("\n %d+%d =%d",First_Number,Second_Number,First_Number+Second_Number); 
        break;
        case '-':
        printf ("\nPlease Enter First Number =>"); scanf("%d",&First_Number);
        printf ("\nPlease Enter Second Number =>"); scanf("%d",&Second_Number);
        printf ("\n %d-%d =%d",First_Number,Second_Number,First_Number-Second_Number); 
        break;
       case '*':
        printf ("\nPlease Enter First Number =>"); scanf("%d",&First_Number);
        printf ("\nPlease Enter Second Number =>"); scanf("%d",&Second_Number);
        printf ("\n %d * %d =%d",First_Number,Second_Number,First_Number*Second_Number); 
        break;
       case '/':
        printf ("\nPlease Enter First Number =>"); scanf("%d",&First_Number);
        printf ("\nPlease Enter Second Number =>"); scanf("%d",&Second_Number);
        printf ("\n %d / %d =%0.6f",First_Number,Second_Number,(float)First_Number/(float)Second_Number); 
        break;
       case 'm':
        printf ("\nPlease Enter First Number =>"); scanf("%d",&First_Number);
        printf ("\nPlease Enter Second Number =>"); scanf("%d",&Second_Number);
        printf ("\n Module of %d & %d =%d",First_Number,Second_Number,First_Number%Second_Number); 
        break;
        default : printf("\nPlease enter correct value from below list:");
        goto up;
    }
        printf ("\n\n Anything else you wanted to check then press Y= ");
        scanf (" %c",&Yes);
       
    {    if(Yes=='Y')
       {
           goto up;
       }
       else 
       {
           goto down;
       }
         
       down:
        printf("\n Thanks for using Calculator");
}


    return 0;
}

//WAP to swap two number without using third variable

#include <stdio.h>

int main()
{
    int a,b;
    printf ("\n Please enter pre-swapping value for a = ");
    scanf("%d",&a);
    printf ("\n Please enter pre-swapping value for b = ");
    scanf("%d",&b);
    
    a=a+b; // a=10,b=20; now a=30
    b=a-b; //b=30-20=10
    a=a-b; // a =30-10=20
    
    printf ("\n Please enter post-swapping value for a = %d",a);
    printf ("\n Please enter post-swapping value for b = %d",b);
   
    return 0;
}

//WAP to find number is even or odd using ternary operator

#include <stdio.h>

int main() {

    int a;
    printf ("\n Please enter Number = ");
    scanf("%d",&a);

    //Ternary operator ->  condition ? True:false
    (a % 2 ==0) ? printf("%d number is Even Number",a):printf("%d number is Odd Number",a);

    return 0;
}


// WAP to show 1. Monday to Sunday using switch case

#include <stdio.h>
int main ()
{
    int choice;
    printf ("1.Monday");
    printf ("\n2.Tuesday"); 
    printf ("\n3.Wednesday");
    printf ("\n4.Thursday");
    printf ("\n5.Friday");
    printf ("\n6.Saturday");
    printf ("\n7.Sunday");
    
    printf ("\n \n Please choose your favourite day = ");
    scanf ("%d",&choice);
    
    switch (choice)
    {
        case 1: printf ("\n Monday"); break;
        case 2: printf ("\n Tuesday"); break;        
        case 3: printf ("\n Wednesday"); break;
        case 4: printf ("\n Thursday"); break;
        case 5: printf ("\n Friday"); break;        
        case 6: printf ("\n Saturday"); break;
        case 7: printf ("\n Sunday"); break;
        default: printf ("\nEnter the correct value from 1 to 7");
    }  
 return 0;   
}

2. Vowel or Consonant using switch case

#include<stdio.h>
int main()
{
    char Alphabet;
    printf ("\n Please Enter Alphabet to check its Vowel or Consonant = ");
    scanf ("%c",&Alphabet);
    
    switch (Alphabet)
    {
    case 'A': printf ("\n Alphabet A is Vowel"); break;
    case 'E': printf ("\n Alphabet E is Vowel"); break;
    case 'I': printf ("\n Alphabet I is Vowel"); break;
    case 'O': printf ("\n Alphabet O is Vowel"); break;
    case 'U': printf ("\n Alphabet U is Vowel"); break;
    case 'a': printf ("\n Alphabet a is Vowel"); break;
    case 'e': printf ("\n Alphabet e is Vowel"); break;
    case 'i': printf ("\n Alphabet i is Vowel"); break;
    case 'o': printf ("\n Alphabet o is Vowel"); break;
    case 'u': printf ("\n Alphabet u is Vowel"); break;
    default: printf ("\n Alphabet %c is Consonant",Alphabet);
    }
    return 0;
}

//Looping programs:
1. WAP to print 972 to 897 using for loop

#include <stdio.h>

int main() {
 
    int i;
    for (i=972;i>=897;i--)
   { printf("%d \n",i);
   }
    return 0;
}


2. WAP to take 10 no. Input from user and find out …
	3. How many Even numbers are there
	4. How many odd numbers are there
	5. Sum of even numbers
	6. Sum of odd numbers 

#include <stdio.h>

int main() {
   int a[100],i,size=10,SumOdd=0,SumEven=0;
    
    for (i=0;i<size;i++)
    {        printf ("\n Please enter number elements in a[%d]= ",i );         scanf ("%d",&a[i]);    }
        
    printf ("\n Your numbers are =");
    for (i=0;i<size;i++)
    {
        printf(" %d",a[i]);
    }
     printf ("\n How many Even numbers are there =");
     for (i=0;i<size;i++)
     {if (a[i]%2==0)
        {printf(" %d",a[i]);
         SumEven=SumEven+a[i];
        }
     }
       printf ("\n How many odd numbers are there =");
     for (i=0;i<size;i++)
     {if (a[i]%2!=0)
        {printf(" %d",a[i]);
        SumOdd=SumOdd+a[i];
        }
     }
     printf ("\n Sum of even numbers = %d",SumEven);
     printf ("\n Sum of odd numbers = %d",SumOdd);
     
    return 0;
}


//WAP to print table up to given numbers

#include <stdio.h>

int main() {
    
    int i,n;
    printf ("Enter the Number = ");
    scanf ("%d",&n);
    
    for (i=1;i<=10;i++)
    {
        printf ("\n %d * %d = %d",n,i,n*i);
    }
    
    return 0;
}


// WAP to print factorial of given number

#include <stdio.h>

int main() {
 
	int num,fact=1,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		fact = fact * i;
	}
	printf("\nThe Factorial of %d is %d",num,fact);

    return 0;
}

// WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main()
{
	int times,n1=0,n2=1,n3,i;
	printf("\n How many Fibonnaci numbers you want = ");
	scanf("%d",&times);
	
	printf("\nFibonnaci series = %d %d",n1,n2);

	for(i=1;i<=times-2;i++)
	{
		n3 = n1 + n2;
		printf(" %d",n3);
		n1 = n2;
		n2 = n3;
	}
	
	
	return 0;
}


// WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746

#include<stdio.h>  
 int main()    
{    
int n, r=0, rem;    
printf("Please Enter a number: ");    
  scanf("%d",&n);    
  while(n!=0)    
  {    
     rem=n%10;    
     r=r*10+rem;    
     n=n/10;    
  }    
  printf("Reversed Number: %d",r);    
return 0;  
}  

// Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)
// Write a program make a summation of given number (E.g., 1523 Ans: -11)
// Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)

int main(){
    int n,i=0,j,max=0,r,count=0,a[1000],sum=0;
    printf ("Please enter the number = ");
    scanf ("%d",&n);

    while (n!=0)
    {
        r=n%10;
        a[i]=r;
         sum=sum+a[i];
         count++;
           if (r > max)
           { max = r;}
        i++;
        n=n/10;
    }
    for (j=i-1;j>-1;j--)
    {
   printf ("\n Numbers are = %d ",a[j]); 
    }
    printf ("\n Max of the Numbers is = %d ",max); 
    printf ("\n Sum of the Numbers is = %d ",sum); 
    printf ("\n Sum of %d and %d is equal to %d",a[0],a[count-1],a[0]+a[count-1]);
    return 0;
}



//Patterns

Pattern = 1

 #include <stdio.h>
int main ()
{
    int i,j,row;
    printf ("Enter the row count = ");
    scanf ("%d",&row);
  
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=i;j++)
        {
           if (j%2!=0)
           {
               printf ("1 ");
           }
            else
            {
                 printf ("0 ");
            }
        }
       printf("\n");
    }
    return 0;
}

Pattern = 2

#include <stdio.h>
int main ()
{
    int i,j,n=1,row;
    printf ("Enter the row count = ");
    scanf ("%d",&row);
  
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=i;j++)
        {
          printf ("%d ",n);
          n++;
        }
       printf("\n");
    }
    return 0;
}

Pattern = 3

#include <stdio.h>
int main ()
{
    int i,j,row;
    char n='A';
    printf ("Enter the row count = ");
    scanf ("%d",&row);
  
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=i;j++)
        {
          printf ("%c ",n);
          n++;
        }
       printf("\n");
    }
    return 0;
}

Pattern = 4

#include <stdio.h>

int main() {
    int i,j=0,rows;
    char k='A';
    
    printf("Please enter number of row =");
    scanf ("%d",&rows);
    
    for (i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+64);
           // k++;
        }
        printf("\n");
    } 
    

    return 0;
}

Pattern = 5
#include <stdio.h>
int main ()
{
    int i,j,k,rows;
    printf ("Please Enter Number of rows = ");
    scanf("%d",&rows);
    
    for (i=0;i<rows;i++)
    {
        for (j=0;j<2*(rows-i)-1;j++)
        {
            printf(" ");
        }
        for (k=0;k<2*i+1;k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
    return 0;
}

Pattern = 6

#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
    printf("Enter the number of columns = ");  
    scanf("%d",&n);  
for(int i=1;i<=n;i++)  
{  
  for(int j=1;j<=i;j++)  
  {  
    printf(" * ");  
  }  
  printf("\n");  
}  
        for(int i=n-1;i>=1;i--)  
     {  
       for(int j=1;j<=i;j++)  
       {  
         printf(" * ");  
       }  
       printf("\n");  
     } 
     
    return 0;  
}  