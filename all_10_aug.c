1)
#include<stdio.h>

int main()
{
    printf("%d\n",1==5==5);   // 1==5 -> 0==5 -->0
}

//
0

2)
#include<stdio.h>

int main()
{
    int i =0;
    printf("%d %d",i,i++);  // i++ ->0 -->1
}

//
1 0

3)
#include<stdio.h>

int main()
{
    int x=5;
   printf("%d %d %d\n",x++,x++,x++);
}

//
7 6 5

4)
#include<stdio.h>

int main()
{
    int x=2;
   printf("%d   ",++x++); //error
   printf("%d\n",x++);
}

//


5)
#include<stdio.h>

int main()
{
    int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
}

//
% ->1
1 == 1 is 
%s -> TRUE

//
1==1 is TRUE

// if k==0 output is -> 1==1 FALSE


7)
#include<stdio.h>

int main()
{
    int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);
}


//   7-6 = 1   1+1 = 2    2+2 =4  ->4

8)
#include<stdio.h>

int main()
{
    int x=10,y=5,p,q;
   p=x>9;
   q=p||(x=5,y=10);
   printf("%d %d %d\n",q,x,y);
}


//   p=10>9  p=`1
//   1 10 5

9)
#include<stdio.h>

int main()
{
  int x=2,y=1;
   y+=x<<=2;
   printf("%d %d\n",x,y);
}


//   y=y+x
// x<<1 2->4  and x<<1 ->8
// y = 1+8
//8 9

10)
#include<stdio.h>

int main()
{
  int x=2,y=4,z;
    z=y++*x++|y--;
    printf("%d\n",z);
}

//4*2|5  ->8|5
// 13

11)
#include<stdio.h>

int main()
{
 int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;
    printf("%d\n",d);
}

//0
12)
#include<stdio.h>

int main()
{
    int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);
}

//4

13)
#include<stdio.h>

int main()
{
    int a=10,b=20;
    a=(a>5||b<6?40:50);
    printf("%d\n",a);
}

// 1||0  ->true
// 40

14)
#include<stdio.h>

int main()
{
    printf("%x\n",-1>>4);
    printf("%x\n",-1<<4);
}

// ffffffff
// fffffff0

15)
#include<stdio.h>

int main()
{
    int x=7;
    x=(x<<=x%2);
    printf("%d\n",x); //14
}

// x%2 ->1
//x<<=1
//14

16)
#include<stdio.h>

int main()
{
    int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));
}

//a>c -> 1
//b>=1 ->1
//1

17)
#include<stdio.h>

int main()
{
   int a=5;
    a=a-~a +1;
    printf("%d\n",a);
}

//12

18)
#include<stdio.h>

int main()
{
    int x,a,b,c;
    a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);
}

//0


20)
#include<stdio.h>

int main()
{
   int i=5;
    i=i++ - i;
    printf("%d",i);
}

//-1



1)
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}

//preprocessor works

2)
#include<stdio.h>
# define loop while(true)
int main()
{
	loop;  
	printf("preprocessor-aptitude");
	return 0;
}
//error: 'true' undeclared (first use in this function)
 # define loop while(true)

3)
#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}

//
error: lvalue required as decrement operand
 # define x --5

4)
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}


//16 25

5)

#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;
	printf("%d",i);
}

//7

6)
#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}

//
6

7)
#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	return 0;
}
//6

8)
#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}

//Aug 10 2021

9)
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}

//17:10:47


10)
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );
	return 0;
}

//Line :4

11)
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}

//you and me are great!

12)
#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}

//%s C preprocessor C preprocessor

13)
#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}

//macro25 = 47

14)
#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}

// reprocessor  13

15)
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
    
	printf("%d",i);
	return 0;
}

//warning: "i" redefined
  #define i 20

Untitled-1.c:2: note: this is the location of the previous definition
 #define i 10

20

16)
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}

//50

17)
#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
}

//
sizeof (i) =1
18)
1.	#include <stdio.h>  
2.	#include <conio.h>  
3.	void main() {  
4.	int a=0;  
5.	#ifdef NOINPUT  
6.	a=2;  
7.	#else  
8.	printf("Enter a:");  
9.	scanf("%d", &a);  
10.	#endif         
11.	  
12.	printf("Value of a: %d\n", a);  
13.	getch();  
14.	}  
Output:
Enter a:5
Value of a: 5





1)
1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;

//interger pointer

2)  In the following code what is 'P'?
typedef char *charp;
const char P;

// constant char pointer

7)
1.	#include <stdio.h>  
2.	typedef struct student  
3.	{  
4.	char name[20];  
5.	int age;  
6.	}stud;  
7.	int main()  
8.	{  
9.	stud s1;  
10.	printf("Enter the details of student s1: ");  
11.	printf("\nEnter the name of the student:");  
12.	scanf("%s",&s1.name);  
13.	printf("\nEnter the age of student:");  
14.	scanf("%d",&s1.age);  
15.	printf("\n Name of the student is : %s", s1.name);  
16.	printf("\n Age of the student is : %d", s1.age);  
17.	return 0;  
18.	}  
Output
Enter the details of student s1: 
Enter the name of the student: Peter 
Enter the age of student: 28 
Name of the student is : Peter 
Age of the student is : 28 
