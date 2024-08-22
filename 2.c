#include<stdio.h>

void main()
{
	 char grade;
	 int marks;
	 printf("Enter your marks");
	 scanf("%d",&marks);
	 
	 
	 
	 grade= (marks>=90&&marks<=100)?'a'
	 :(marks>=90 && marks <80)?'b'
	 :(marks>80 && marks<70)?'c'
	 :(marks>70 && marks<60)?'d'
	 :(marks>60 && marks<40)?'e'
	 :'f';
	 printf("your grade is %c",grade);
	 switch(grade)
	 {
	 	case 'a': printf("A is excellent work");
	 	break;
	 	case'b': printf(" b is well done") ;
	 	break;
		case'c':printf("c is good job");
		break;
		case'd':printf(" d is passed");
		break;
		case'e': printf("e is not better");
		break;
		case'f': printf("f is failed");
		break;         
		 }
		 if( grade =='a'||grade == 'b'|| grade=='c'||grade=='d'||grade =='e')
		 {
		 	printf(" you are eligible for  the next year");
			 }
		   	else
			{
			 printf(" please try again next time ");	
				}	
}