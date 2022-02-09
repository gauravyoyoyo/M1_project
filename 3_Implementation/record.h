/**
 * @file record.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef __RECORD_H__
#define __RECORD_H__

enum max_lengths {
    MAX_NAME_LEN = 32,
    MAX_PHONE_NUMBER_LEN = 15,
    MAX_AMOUNT_LEN = 5
};

typedef struct record_t{
    char name[MAX_NAME_LEN];
    char ph_number[MAX_PHONE_NUMBER_LEN];
    char amount[MAX_AMOUNT_LEN];
}record_t;

#endif