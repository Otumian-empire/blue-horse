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
    printf("1 create database\n");
    printf("2 create table\n");
    printf("3 add data\n");
    printf("4 read data\n");
    printf("5 update data\n");
    printf("6 delete data\n");
    printf("7 read  all data\n");
    printf("8 delete all  data\n");

    printf("Enter option: ");
    scanf("%x", &option);

    switch (option)
    {
    case 1:
        printf("%s", "1 create database\n");
        break;
    case 2:
        printf("%s", "2 create table\n");
        break;
    case 3:
        printf("%s", "3 add data\n");
        break;
    case 4:
        printf("%s", "4 read data\n");
        break;
    case 5:
        printf("%s", "5 update data\n");
        break;
    case 6:
        printf("%s", "6 delete data\n");
        break;
    case 7:
        printf("%s", "7 read  all data\n");
        break;
    case 8:
        printf("%s", "8 delete all  data\n");
        break;
    default:
        printf("%s", "Option not known, please select any of the above\n");
    }

    return 0;
}
