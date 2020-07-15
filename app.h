#ifndef APP_H
#define APP_H

// conn to sqlite and open database
static int callback(void *NotUsed, int argc, char **argv, char **azColName);

// create database
bool connect_database(char db_name[]);

// delete table
bool disconnect_table(char tb_name[]);

// create table by passing sql query
bool create_table(char tb_name[], char fields);

// delete database
bool delete_database(char db_name[]);

// insert
bool insert_into_tb(char tb_name[], char &fields);

// read
void read_from_tb(char tb_name[], char &fields);

// delete
bool delete_from_tb(char tb_name[], char &fields);

// update
bool update_tb(char tb_name[], char &fields);

#endif
