/*
main.c 
created on Friday, 2019, 05 July
By Otumian
*/

/*
Student record system - with sqlite database
table schema:
    id | student_id | student_name | student_program | freshman_date | graduation_date
*/

#include <stdio.h>
#include "app.h"

int main()
{
    // conn to sqlite and open database
    if (!connect_database())
    {
        printf("Database couldn't open\n");
    }
/* 
    // insert query
    char student_name[27], student_id[7], student_program[27], date_of_commencement[12];
    char date_of_graduation[12];

    printf("Please provide info to the properties below in order\n");

    // student name
    printf("Name: ");
    fgets(student_name, 27, stdin);

    // student id
    // for now id is of size 5 - change in code above - create_db_sql
    printf("Index Number: ");
    fgets(student_id, 7, stdin);

    // student program offered
    printf("Program: ");
    fgets(student_program, 27, stdin);

    // student date of freshman
    // enter date in format YYYY-MM-DD
    // example: 2025-06-12
    printf("Date of freshman in format[YYYY-MM-DD]: ");
    fgets(date_of_commencement, 12, stdin);

    // student date of graduation
    printf("Date of graduation: ");
    fgets(date_of_graduation, 12, stdin);

    // use the concept of string builder to form the insert_query
    if (!insert_into_tb(student_name, student_id, student_program, date_of_commencement, date_of_graduation))
    {
        puts("couldn't insert into table");
        fprintf(stderr, "%s\n", errmsg);
    }

    // read data from table
    read_all_from_tb();

    // close conn
    disconnect_database();
 */
    return 0;
}
