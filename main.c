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
#include <sqlite3.h>

// i didn't write this callback
static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");

    return 0;
}

int main()
{
    // conn to sqlite and open database
    sqlite3 *conn;

    // errmsg
    char *errmsg = 0;

    if (sqlite3_open("test.db", &conn))
    {
        printf("Database couldn't open\n");
    }
    else
    {
        printf("Database accessed successfully\n");
    }

    // create a table for student
    char *create_db_sql = "CREATE TABLE IF NOT EXISTS STUDENT0 (\
    ID INTEGER PRIMARY KEY AUTOINCREMENT,\
    STUDENT_NAME CHAR(25) NOT NULL,\
    STUDENT_ID CHAR(5) NOT NULL,\
    STUDENT_PROGRAM CHAR(25) NOT NULL,\
    DATE_OF_COMMENCEMENT DATE DEFAULT (DATE('now')),\
    DATE_OF_GRADUATION DATE NOT NULL\
);";

    if (sqlite3_exec(conn, create_db_sql, callback, 0, &errmsg) == SQLITE_OK)
    {
        puts("table created");
    }
    else
    {
        puts("couldn't create table");
        fprintf(stderr, "%s\n", errmsg);
    }

    // insert query
    char student_name[100], student_id[10], student_program[100], date_of_commencement[15];
    char date_of_graduation[15], insert_sql[1000];

    printf("Please provide info to the properties below in order\n");

    // student name
    printf("Name: ");
    fgets(student_name, 100, stdin);

    // student id
    // for now id is of size 5 - change in code above - create_db_sql
    printf("Index Number: ");
    fgets(student_id, 10, stdin);

    // student program offered
    printf("Program: ");
    fgets(student_program, 100, stdin);

    // student date of freshman
    // enter date in format YYYY-MM-DD
    // example: 2025-06-12
    printf("Date of freshman in format[YYYY-MM-DD]: ");
    fgets(date_of_commencement, 15, stdin);

    // student date of graduation
    printf("Date of graduation: ");
    fgets(date_of_graduation, 15, stdin);

    // use the concept of string builder to form the insert_query
    sprintf(insert_sql, "INSERT INTO STUDENT0(STUDENT_NAME, STUDENT_ID, STUDENT_PROGRAM, DATE_OF_COMMENCEMENT, DATE_OF_GRADUATION)VALUES('%s', '%s', '%s', '%s', '%s')\n",
            student_name, student_id, student_program, date_of_commencement, date_of_graduation);

    printf("%s", insert_sql);

    if (sqlite3_exec(conn, insert_sql, callback, 0, &errmsg) == SQLITE_OK)
    {
        puts("data inserted into the table");
    }
    else
    {
        puts("couldn't insert into table");
        fprintf(stderr, "%s\n", errmsg);
    }

    // read data from table
    char *read_sql = "SELECT * FROM STUDENT0";

    if (sqlite3_exec(conn, read_sql, callback, 0, &errmsg) == SQLITE_OK)
    {
        puts("data from select query");
        fprintf(stdout, "Data from table");
    }
    else
    {
        puts("couldn't insert into table");
        fprintf(stderr, "%s\n", errmsg);
    }

    // close conn
    sqlite3_close(conn);

    return 0;
}
