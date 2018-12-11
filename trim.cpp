/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>
void trim(const char *source, char *trimmed_string){
  int start=0;
  int end=strlen(source)-1;
  int count=0;

  get_start(source, &start);
  get_end(source, &end, &start);

  if(end==-1){
    strcpy(trimmed_string, "");
    return;
  }

  for(int i = start; i <= end; i++){
    trimmed_string[count]=source[i];
    count++;
  }
}

static void get_start(const char* source, int *begin){
  while (source[*begin] == ' ') {
     *begin=*begin+1;
   }
}
static void get_end(const char* source, int *end, int *begin){
  while(*end>=*begin && source[*end]== ' '){
    *end = *end-1;
  }
}
