#include <stdio.h>
#include <stdlib.h>

#include "display_record.h"

int display_record(void) {
  record_t record;
  FILE *fptr;
  int count = 0;
  if ((fptr = fopen("records.bin", "rb")) == NULL) {
    return -2;
  }

  printf("\n### User records ###\n");
  while (fread(&record, sizeof(record), 1, fptr) == 1) {
    printf("Name = %s\nPhone Number = %s\nAmount = %s\n\n", record.name,
           record.ph_number, record.amount);
    count++;
  }
  
  fclose(fptr);
  return count;
}