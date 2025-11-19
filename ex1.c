/******************
Name:Ahmad Abu bker
ID:213109192
Assignment:ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="
int main(void) {
    char input_charcter ;
    printf("Ascii:\n");
    printf("Please enter a character\n");
    scanf("%c", &input_charcter);
    printf("Its numerical value is: %d\n" , input_charcter);
    int value_binaryidentfier;
    value_binaryidentfier = input_charcter&1;
    printf("0 for even, 1 for odd: %d\n",value_binaryidentfier);


    printf("\n") ;


    printf("2's complement to other representations:\nPlease enter a negative integer\n");
    int NegativeNumb,complment;   scanf("%d",&complment);
    NegativeNumb = -complment-1;  unsigned int Number2= (unsigned int)complment;
    printf("1's complement: -%d\nunsigned: %u\n",NegativeNumb,Number2);
    printf("\n");

    printf("Shifting right and left:\n");
    printf("Please enter 3 integers\n");
    int value, right, left;
    scanf("%d %d %d", &value, &right, &left);
    value=value>>right ;
    value=value<<left ;
    printf("After shifting right and left: %d\n", value);

    printf("\n");

    printf("Even - Odd:\n");
    printf("please enter 3 integers\n");
    int number1, number2, number3;
    scanf("%d %d %d", &number1, &number2, &number3);
    number1 = number1&1 ;
    number2 = number2&1 ;
    number3 = number3&1 ;
    printf("0 - most of them are even, 1 - most of them are odd: %d\n",(number1&number2)|(number2&number3)|(number3&number1));
    //any thing is buildable with logicgates 0/1 i dont see why cant i do the if statment that way .

printf("\n");

    int hex, oct;
    int boolean = 0;// a boolean job here is to reply with 0 and 1 since its 32 bit we can store 32 diffrent values im gonna use the first 4 and the next 4 for msp and lsp storing
    printf("Different Bases:\n");
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf("%o",&oct);
    scanf("%x",&hex);
    boolean |= ((unsigned int)oct >> 31) & 1;
    boolean |= (((unsigned int)hex >> 31) & 1) << 1;
    oct=((unsigned int)oct<<31)>>31;
    hex=((unsigned int)hex<<31)>>31;
    printf("LSBs: %o %x\n",oct,hex);
    printf("MSBs: %d %d\n",boolean & 1,(boolean >> 1) & 1);
    printf("Bye!");


    return 0;
}