#include <stdio.h>

void Sequencing()
{
    printf("\nEntry %s\n", __FUNCTION__);
    //series of statements which execute one after another and there is no jumping of control
    int i = 0;
    int j = 0;

    i++;
    j++;
    i = j + 10;
    j = i - 10;
    printf("\nExit %s\n", __FUNCTION__);
}

void SelectionIf()
{
    printf("\nEntry %s\n", __FUNCTION__);
    int i = 0;
    int j = 0;
    int res = 0;
    printf("\nEnter 2 numbers to subtract:");
    scanf("%d%d", &i,&j);
    
    if( i > j )
    {
        printf("\ni > j");
        res = i - j;
    }
    else // j > i and j == i
    {
        printf("\nj > i");
        res = j - i;
    }
    printf("\nResult of Subtraction = %d", res);
    printf("\nExit %s\n", __FUNCTION__);
    /*
       if (<expression>)
       {
            <body-of-if>
            <if>
       }
       else if(<expression>)
       {
       
       }
       else //optional
       {
       
       }
       if(choice == 1)
       {}
       else if(choice == 2)
       {}
       else if(choice == 3)
       {}

       //faster in execution
       switch-case
    */
}

void SelectionSwitch()
{
    int choice = 0;
    int no1 = 0, no2 = 0;
    printf("\n1. Add\n2. Sub\n3. Mul\n 4.Div\n.Enter your choice:-");
    scanf("%d", &choice);
    printf("\nEnter 2 Numbers:-");
    scanf("%d%d", &no1, &no2);

    switch(choice)
    {
        case 1:
            printf("\nAddition of %d, %d is %d",no1, no2, no1+no2);
            break;
        case 2:
            printf("\nSubtraction of %d, %d is %d",no1, no2, no1-no2);
            break;
        case 3:
            printf("\nMultiplication of %d, %d is %d",no1, no2, no1*no2);
            break;
        case 4:
            printf("\nDivision of %d, %d is %d",no1, no2, no1/no2);
            break;
        default:
            break;
    }
    /*
       i = 10, b = 30
     switch(<expression which results into integer value>)
     {
        case <any expression which results into compile time evaluated integer contant>:
            <body> i.e case statements
        break; //to terminate the case statement
        case 2*3: valid
        case 6: above case also results in same result
        case 2*i: in valid - i is a variable
        case i*b: in valid - i, b are variables
        case 1.2: in valid - double
        case "j": in valid - j is a string i.e the memory layout contains j & \0 (string terminating character)
        case 'j': valid
        default: unconditional true
     }
     */
}

void Repetition()
{
    //enumeration controlled loop
    /*
        for(1. <initialization> ; 2. <expression> ; 4. <loop-control>)
        {
            3. <body>
        }
        Here 1 executes only at start
        Then 2 is validated and control goes to 3, from 3 control goes to 4 and then again to 2 to validate the expression.
        This repeats until expression becomes false
        variations of for loop :
        i) for ( ; ; ) // loop without any expression assumes default expression as 1 i.e always true and it will execute infinite times.
           {
           
           }
        ii) for( i = 0 ; i < 100000 ; i++) ;
        Do Nothing Loops, spend time (Time delay loops)
        iii) for (i = 0, j = 0; i < 100 && j < 200 ; i++, j+=2)
        Multiple Initializations
     */
    printf("\nfor demo\n");
    for (int i = 0 ; i <= 100 ; i++)
        printf("\n%d", i);

    /*
        while : Logically Controlled Loop
        while(<expression>)
        {
            until expression becomes false the body keeps on executing
            <body>
        }
        // 1 must be explicitly mentioned when you want the loop to run infinite times
        while(1)
        {
        
        }
     */
    printf("\nwhile demo\n");
    int i = 0;
    while ( i != -1)
    {
        printf("\nEnter Number, to stop enter -1:");
        scanf("%d", &i);
        printf("\ni = %d", i);
    }
    //for & while both are entry controlled loop
    // do - while is exit controlled loop
    printf("\ndo-while demo\n");
    i = 0;
    do
    {
        printf("\nEnter Number, to stop enter 0:");
        scanf("%d", &i);
        printf("\ni = %d", i);
    }while( i != 0);
}

int Factorial(int no)
{
    //handling negative number, 0, 1
    int fact = 2;
    for(int i = 3 ; i <= no ; i++)
    {
        printf("\nBefore fact=%d, i=%d", fact, i);
        fact = fact*i;
        printf("\nAfter fact=%d, i=%d", fact, i);
    }
    return fact;
}

int RecursiveFactorial(int no)
{
    if(no == 0 || no == 1)
        return 1;
    if(no == 2)
        return 2;
    return no*RecursiveFactorial(no-1);
}
/*
 RecursiveFactorial no = 2 : return 2 --> will be returned to caller
 RecursiveFactorial no = 3 : return 3*RecursiveFactorial(2) --> return 3*2
 RecursiveFactorial no = 4 : return 4*RecursiveFactorial(3) --> return 4*6
 RecursiveFactorial no = 5 : return 5*RecursiveFactorial(4) --> return 5*24
 main - result = RecursiveFactorial(5) --> result = 120
 */
int main()
{
#if 0
    Sequencing();
    SelectionIf();
    SelectionSwitch();
    Repetition();
#endif
    //Functions 
    int no = 0;
    printf("\nEnter Number whose factorial is to be found:-");
    scanf("%d", &no);
    int result = Factorial(no);
    printf("\nFactorial of %d is %d", no, result);
    result = RecursiveFactorial(no);
    printf("\nRecursive Factorial of %d is %d", no, result);
    //Recursion - calling same function again
    //Direct Recursion : A calling A
    //Indirect Recursion : A calling B, B calling A
    //jump statements :
    //a . goto
        /*L1: printf("Hello\n");
         goto L1;*/
    //b. break
    /*for(int i = 0 ; i < 100 ; i++)
    {
        if(i == 45)
            break;
        printf("\ni=%d", i);
    }*/
    //c. continue
    /*for(int i = 0 ; i < 100 ; i++)
    {
        if(i % 5 == 0)
            continue;
        printf("\ni=%d", i);
    }*/
    return 0;
}
