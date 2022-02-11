#include "unity.h"
#include "telecom_billing.h"


void setUp(){}

void tearDown(){}

void test_add_record(void) {
  record_t new_record = {"abc", "6264522201", "450"};
  TEST_ASSERT_EQUAL(0, add_record(&new_record));
}

void test_delete_record(void) {
  record_t new_record = {"abc", "626452201", "450"};
  TEST_ASSERT_EQUAL(0, add_record(&new_record));
  TEST_ASSERT_EQUAL(0, delete_record(new_record.name));
}


void test_search_record(void) {
  record_t new_record = {"Rahul", "8349553345", "500"};
  TEST_ASSERT_EQUAL(0, add_record(&new_record));
  TEST_ASSERT_EQUAL(0 , search_record(new_record.name));
  TEST_ASSERT_EQUAL(0 , delete_record(new_record.name));
}
void test_display_record(void) 
{ 
  TEST_ASSERT_EQUAL(1, display_record()>0);
}

int main(void)
{

  UNITY_BEGIN();


  RUN_TEST(test_add_record);
  RUN_TEST(test_delete_record);
  RUN_TEST(test_search_record);
  RUN_TEST(test_display_record);

  return UNITY_END();
}