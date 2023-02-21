#include <stdio.h>
#include "sqlite3.h"

    // DefineS a callback function that is called each time a row of data is retrieved from the database
    static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;
    for(i=0; i<argc; i++){
      // Print out each column name and its corresponding value
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
  }

  // Define the main function
  int main(int argc, char **argv){
    sqlite3 *db;                // Pointer to an SQLite database
    char *zErrMsg = 0;          // Pointer to an error message string
    int rc;                     // Return code from SQLite functions

    // Check that the program was called with two arguments (the database filename and an SQL statement)
    if( argc!=3 ){
      fprintf(stderr, "Usage: %s DATABASE SQL-STATEMENT\n", argv[0]);
      return(1);
    }

    // Open the SQLite database specified in the first argument
    rc = sqlite3_open(argv[1], &db);
    if( rc ){
      // If there was an error opening the database, print an error message and return with an error code
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      sqlite3_close(db);
      return(1);
    }

    // Execute the SQL statement specified in the 2ND argument, calling the callback function for each row of data
    rc = sqlite3_exec(db, argv[2], callback, 0, &zErrMsg);
    if( rc!=SQLITE_OK ){
      // If there's an error executing the SQL statement, print an error message and free the error message string
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    }
    // Close the database connection and return with a success code
    sqlite3_close(db);
    return 0;
  }
