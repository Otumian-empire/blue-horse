/*
main.c 
created on Friday, 2019, 05 July
By Otumian
*/

#include <stdio.h>

int main()
{
    unsigned int option;

    printf("Blue-horse Student Record Management System\n");
    printf("1 read all data\n");
    printf("2 read\n");
    printf("3 add data\n");
    printf("4 update data\n");
    printf("5 delete data\n");
    printf("6 delete all data\n");
    printf("7 exit\n");

    printf("Enter option: ");
    scanf("%x", &option);

    switch (option)
    {
    case 1:
        printf("1 read all data\n");
        break;
    case 2:
        printf("2 read data\n");
        break;
    case 3:
        printf("3 add data\n");
        break;
    case 4:
        printf("4 update data\n");
        break;
    case 5:
        printf("5 delete data\n");
        break;
    case 6:
        printf("6 delete all  data\n");
        break;
    case 7:
        printf("7 exit\n");
        break;
    default:
        printf("Option not known, please select any of the above\n");
    }

    return 0;
}
