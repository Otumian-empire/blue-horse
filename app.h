#ifndef APP_H
#define APP_H

// create database
int connect_database();
// for the above, the database name is default
// int connect_database(char db_name[]);

// delete table
// the connection is global
void disconnect_database();

// insert
int insert_into_tb(char student_name[], char student_id[], char student_program[], char date_of_commencement[], char date_of_graduation[]);

// read
void read_all_from_tb();

/*
// read 
void read_from_tb(char tb_name[], char fields);
// update
int update_tb(char tb_name[], char fields);

// delete
int delete_from_tb(char tb_name [], char fields);
*/
#endif
