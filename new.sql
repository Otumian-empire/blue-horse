PRAGMA foreign_keys=OFF;
BEGIN TRANSACTION;

CREATE TABLE STUDENT0 ( ID INT PRIMARY KEY NOT NULL,
       STUDENT_NAME CHAR(25) NOT NULL,
       STUDENT_ID CHAR(5) NOT NULL,
       STUDENT_PROGRAM CHAR(25) NOT NULL,
       DATE_OF_COMMENCEMENT DATE DEFAULT (DATE('now')), DATE_OF_GRADUATION DATE NOT NULL );
/* CREATE TABLE STUDENT( 
    ID INT PRIMARY KEY NOT NULL,
    STUDENT_NAME CHAR(25) NOT NULL,
    STUDENT_ID CHAR(5) NOT NULL,
    STUDENT_PROGRAM CHAR(25) NOT NULL,
    DATE_OF_COMMENCEMENT DATE('now', '+1 day'),
    DATE_OF_GRADUATION DATE NOT NULL
); */


/*
CREATE TABLE PERSON(
  ID INT PRIMARY KEY NOT NULL,
  NAME TEXT NOT NULL,
  SURNAME TEXT NOT NULL,
  AGE INT NOT NULL,
  ADDRESS cHAR(50),
  SALARY REAL
); 
*/

/*
CREATE TABLE student(
  ID int primary key not null,
  student_name text not null,
  student_id text not null unique,
  student_program text not null,
  date_of_commencememnt text default date(now),
  date_of_graduation text not null
);
*/
COMMIT;
