/**
 * @file search_record.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "search_record.h"
#include "utility.h"

int search_record(const char *name) {
  record_t record;
  FILE *f;

  f = fopen("records.bin", "rb");
  if (f == NULL) {
    return -2;
  }

  while (fread(&record, sizeof(record_t), 1, f) == 1) {
    if (strcmp(record.name, name) == 0) {
      printf("\nrecord details for %s:\n", name);
      printf("Name = %s\nPhone Number = %s\nAmount = %s\n\n", record.name, record.ph_number, record.amount);
      fclose(f);
      return 0;
    }
  }
  fclose(f);
  return -1;
}