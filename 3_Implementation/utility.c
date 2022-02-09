/**
 * @file utility.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "utility.h"
#include "record.h"

void get_data(char *name) {

  int i = 0, j;
  char c, ch;
  //__fpurge(stdin);
  do {
    c = getchar();
    if (c != '\n') {
      *(name + i) = c;
      putchar(c);
      i++;
    }
    if (c == 8) {
      if (i > 0) {
        i--;
      }
      for (j = 0; j < i; j++) {
        ch = *(name + j);
        putchar(ch);
      }
    }
  } while (c != '\n');
  *(name + i) = '\0';
}

void get_record_details(record_t *record) {
  printf("\nEnter name: ");
  //__fpurge(stdin);
  get_data(record->name);

  printf("\nEnter the Phone number: ");
  //__fpurge(stdin);
  get_data(record->ph_number);

  printf("\nEnter Amount: ");
  //__fpurge(stdin);
  get_data(record->amount);
}