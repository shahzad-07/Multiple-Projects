#include<stdio.h>
#include<math.h>
#include<conio.h>

void rules()
{	
	printf("\n\n\nRules for the game:");
	printf("\n1. You have 6 questions to answer.");
	printf("\n2. You have four options to each quastion.");
	printf("\n3. Each right answer will give you 10 points, and if your answer is wrong you lose 5 points.");
	getch();
}

void question1()
{
	int first, point;
	printf("\n\n\n1. Who is the father of Computer??");
	printf("\n1. Charles Babbage \t2. Samual \t3. Blais Pascal \t4. Howard\n");
	scanf("%d", &first);
	
	if(first == 1)
    {
	    printf("Correct Answer!!");
	    point = point + 10;
    }
    else if(first == 2 || first == 3 || first == 4)
    {
	    printf("Wrong Answer");
	    point = point - 5;
    }
    else
    {
	    printf("Invalid Option!!");
	    point = point + 0;
    }
    
    printf("\nPoints : %d", point);
}


void question2()
{
	int second, point;
	printf("\n\n\n2. Who developed C language??");
	printf("\n1. Charles Babbage \t2. James Gosling \t3. Dennis M Ritchie \t4. Stephen Hawking\n");
	scanf("%d", &second);
	
	if(second == 3)
    {
	    printf("Right Answer!!");
	    point = point + 10;
    }
    else if(second == 1 || second == 2 || second == 4)
    {
	    printf("Wrong Answer");
	    point = point - 5;
    }
    else
    {
	    printf("Invalid Option!!");
	    point = point + 0;
    }
    
    printf("\nPoints : %d", point);
}


void question3()
{
	int third, point;
	printf("\n\n\n3. How many Keywords are there in C??");
	printf("\n1. 45 \t2. 31 \t3. 32 \t4. 33\n");
	scanf("%d", &third);
	
	if(third == 3)
    {
	    printf("Correct Answer!!");
	    point = point + 10;
    }
    else if(third == 2 || third == 3 || third == 4)
    {
	    printf("Wrong Answer");
	    point = point - 5;
    }
    else
    {
	    printf("Invalid Option!!");
	    point = point + 0;
    }
    
    printf("\nPoints : %d", point);
}


void question4()
{
	int fourth, point;
	printf("\n\n\n4. Array of Characters is known as??");
	printf("\n1. Pointers \t2. Strings \t3. Java \t4. Multi dimension array\n");
	scanf("%d", &fourth);
	
	if(fourth == 2)
    {
	    printf("Correct Answer!!");
	    point = point + 10;
    }
    else if(fourth == 1 || fourth == 3 || fourth == 4)
    {
	    printf("Wrong Answer");
	    point = point - 5;
    }
    else
    {
	    printf("Invalid Option!!");
	    point = point + 0;
    }
    
    printf("\nPoints : %d", point);
}


void question5()
{
	int fifth, point;
	printf("\n\n\n5. What is the ASCII value of letter 'a'??");
	printf("\n1. 99 \t2. 65 \t3. 87 \t4. 97\n");
	scanf("%d", &fifth);
	
	if(fifth == 4)
    {
	    printf("Correct Answer!!");
	    point = point + 10;
    }
    else if(fifth == 1 || fifth == 2 || fifth == 3)
    {
	    printf("Wrong Answer");
	    point = point - 5;
    }
    else
    {
	    printf("Invalid Option!!");
	    point = point + 0;
    }
    
    printf("\nPoints : %d", point);
}


void question6()
{
	int sixth, point;
	printf("\n\n\n6. Can one function call another function??");
	printf("\n1. Yes 2. No\n");
	scanf("%d", &sixth);
	
	if(sixth == 1)
    {
	    printf("Correct Answer!!");
	    point = point + 10;
    }
    else if(sixth == 2)
    {
	    printf("Wrong Answer");
	    point = point - 5;
    }
    else
    {
	    printf("Invalid Option!!");
	    point = point + 0;
    }
    
    printf("\nTotal Points : %d", point);
}



int main()
{
	int num=0, point;
	printf("\n\n");
	printf("\t\t\t\t\t\tWELCOME TO THE QUIZ!!");
	getch();
	
	rules();
	
	printf("\n\nAre you ready for the game??\n");
	printf("\n0. NO\t1. YES\n");
	scanf("\n\n%d", &num);
	
	switch(num)
	{
		case 0:
			{
				printf("Thank You!!\nYou can Leave");
			    break;
			}
		case 1:
			{
				printf("\n\t\t\t\t\t\tLets Start the Game!!");
				question1();
				question2();
				question3();
				question4();
				question5();
				question6();
				break;
			}
	    default:
	    	{
	    		printf("Invalid Input!!");
	    		break;
			}
	}

return 0;
}
