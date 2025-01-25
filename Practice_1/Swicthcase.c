#include <stdio.h>
void main()
{

    int number;
    printf("Enter any number :- ");
    scanf("%d",&number);


    switch(number){

        case 1:
        printf("Sunday");
        break;
        
        case 2:
        printf("Monday");
        break;

        case 3:
        printf("Tuesday");
        break;

        case 4:
        printf("Wednesday");
        break;

        case 5:
        printf("Thusday");
        break;

        case 6:
        printf("Friday");
        break;

        case 7:
        printf("Saturday");
        break;

        default:
        printf("Not a valid week");
        break;

    }

}

