#include <sqlite3.h>
#include <stdio.h>
#include "app.h"

sqlite3 *conn;

char *errmsg = 0;

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

int connect_database()
{
    int db_status = 0;

    if (!sqlite3_open("test.db", &conn))
    {
        db_status = 1;
    }

    return db_status;
}

void disconnect_database()
{
    sqlite3_close(conn);
}

int insert_into_tb(char student_name[], char student_id[], char student_program[], char date_of_commencement[], char date_of_graduation[])
{
    char *insert_sql;
    int insert_status = 0;

    sprintf(insert_sql, "INSERT INTO STUDENT0(STUDENT_NAME, STUDENT_ID, STUDENT_PROGRAM, DATE_OF_COMMENCEMENT, DATE_OF_GRADUATION)VALUES('%s', '%s', '%s', '%s', '%s')\n",
            student_name, student_id, student_program, date_of_commencement, date_of_graduation);

    if (sqlite3_exec(conn, insert_sql, callback, 0, &errmsg) == SQLITE_OK)
    {
        insert_status = 1;
    }

    return insert_status;
}

void read_all_from_tb()
{
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
}
