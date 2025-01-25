#include<stdio.h>

int main(){

    char name[30];
    int b_salary;
    float DA , HRA , GROSS;

    printf("Enter Name :- ");
    scanf("%s",&name);

    printf("Enter salary :- ");
    scanf("%d",&b_salary);

    if (b_salary>10000){
        DA =(b_salary*10)/100;
        HRA = (b_salary*5)/100;
        GROSS = b_salary + DA + HRA;

        printf("DA is %.2f \n",DA);
        printf("HRA is %.2f \n",HRA);
        printf("GROSS salary is %.2f \n",GROSS);
    }
    else{
        DA = (b_salary*5)/100;
        HRA = (b_salary*3)/100;
        GROSS = b_salary + DA + HRA;

        printf("DA is %.2f \n",DA);
        printf("HRA is %.2f \n",HRA);
        printf("GROSS salary is %.2f \n",GROSS);
    }


    int b_salary , DA , HRA , PF, GROSS;
    float NET_SALARY;
    printf("Enter salary :- ");
    scanf("%d",&b_salary);

    DA = (b_salary*55)/100;
    HRA = (b_salary*15)/100;
    GROSS = b_salary + DA + HRA;
    PF = (GROSS*12.5)/100;
    NET_SALARY = GROSS - PF;
    printf("The NET salary is %.2f",NET_SALARY);

    // Basic Salary <= 10000 : HRA = 20%,
    // DA = 80% Basic Salary <= 20000 :
    // HRA = 25%, DA = 90% Basic Salary
    // > 20000 : HRA = 30%, DA = 95%

    int b_salary;
    float DA , HRA , PF, GROSS;
    float NET_SALARY;
    printf("Enter salary :- ");
    scanf("%d",&b_salary);


    if(b_salary<=10000){
        HRA = (b_salary*20) / 100;
        DA = (b_salary*80) / 100;
        printf("HRA is %.2f \n",HRA);
        printf("DA is %.2f \n",DA);
    }
    else if (b_salary<=20000){
        HRA = (b_salary*25) / 100;
        DA = (b_salary*90) / 100;
        printf("HRA is %.2f \n",HRA);
        printf("DA is %.2f \n",DA);
    }
    else if(b_salary>20000){
        HRA = (b_salary*30) / 100;
        DA = (b_salary*95) / 100;
        printf("HRA is %.2f \n",HRA);
        printf("DA is %.2f \n",DA);
    }
    
    DA = (b_salary*55)/100;
    HRA = (b_salary*15)/100;
    GROSS = b_salary + DA + HRA;
    PF = (GROSS*12.5)/100;
    NET_SALARY = GROSS - PF;
    printf("The NET salary is %.2f",NET_SALARY);


    return 0;
}