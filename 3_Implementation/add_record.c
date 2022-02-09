/**
 * @file add_record.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
//#include <stdio_ext.h>
#include <stdlib.h>

#include "add_record.h"
#include "utility.h"

int add_record(record_t *record) {

  FILE *fptr;
  if ((fptr = fopen("records.bin", "ab+")) == NULL) {
    return -1;
  }
  fwrite(record, sizeof(record_t), 1, fptr);

  //__fpurge(stdin);
  fclose(fptr);

  return 0;
}