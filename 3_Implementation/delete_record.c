#include "delete_record.h"
#include "utility.h"

int delete_record(const char *name) {
  record_t record;
  FILE *f, *ft;
  int flag, result;

  f = fopen("records.bin", "rb");
  if (f == NULL) {
    return -2;
  } else {
    ft = fopen("temp.bin", "wb+");
    if (ft == NULL) {
      result = -3;
    } else {

      while (fread(&record, sizeof(record_t), 1, f) == 1) {
        if (strcmp(record.name, name) != 0)
          fwrite(&record, sizeof(record_t), 1, ft);
        if (strcmp(record.name, name) == 0)
          flag = 1;
      }
      fclose(f);
      f = NULL;
      fclose(ft);

      if (flag != 1) {
        remove("temp.bin");
        result = -1;
      } else {
        remove("records.bin");
        rename("temp.bin", "records.bin");
        result = 0;
      }
    }
  }
  if (NULL != f)
    fclose(f);

  return result;
}