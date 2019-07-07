/*
hello.c 
created on Thursday, 2019, 04 July
By Otumian
*/
#include <stdio.h>
#include <sqlite3.h>

int main()
{

    // sqlite conn
    sqlite3 *conn;

    // open database with conn
    int rc = sqlite3_open("myhellodb.py", &conn);

    if (rc)
    {
        puts("There is rc");
    }
    else
    {
        puts("There is no rc");
    }

    // close db conn
    sqlite3_close(conn);

    return 0;
}
