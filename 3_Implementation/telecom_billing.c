#include "telecom_billing.h"

typedef enum options {
    ADD_RECORD,
    DELETE_RECORD,
    DISPLAY_RECORD,
    SEARCH_RECORD,
    EXIT
}options_t;

int main(){
    int choice=NONE;

    printf("\n\t  WELCOME TO TELEPHONE BILLING SYSTEM    \n");
    for(;;){
        printf("\nSelect the option\n");
        printf("\n 1 : for adding new records.\n ");
		printf("\n 2 : for displaying records. \n");
		printf("\n 3 : for searching records.\n");
		printf("\n 4 : for deleting records.\n 5 : for exit\n");

        printf("Enter your choice : ");
      //  __fpurge(stdin);
        scanf("%d",&choice);

        switch (choice){
            case ADD_RECORD: {
                record_t *new_record = (record_t *)calloc(1,sizeof(record_t));

                get_record_details(new_record);
                switch(add_record(new_record)){
                    case 0:{
                        printf("\n\t Record added successfully");
                        break;
                    }
                    default:
                    printf("\n\t ERROR try again");
                }
                free(new_record);
                break;
            }

            case DELETE_RECORD: {
                int record_count=display_record();
                if(0<record_count){
                    char name[MAX_NAME_LEN]="";

                    printf("Enter user name : ");
                    get_data(name);

                    switch (delete_record(name)){
                        case -1: 
                            printf("\n\t No match found");
                            break;
                        case -2:
                            printf("\n\t No record found");
                            break;
                        case 0:
                            printf("\n\t Record deleted successfully");
                            break;
                        default:
                            printf("\n\tERROR\n");
                    }
                }
                else if(contact_count ==0 ){
                    printf("\n\t No record found\n");
                }
                break;
            }

            case DISPLAY_RECORD:{
                switch(display_record()){
                    case -1:
                        printf("\n\t No record found\n");
                        break;
                    default:
                        printf("\n\tdisplay record successfully\n");    


                }
                break;
            }

            case SEARCH_RECORD: {
                int record_count=display_record();
                if(0<record_count){
                    char name[MAX_NAME_LEN]="";

                    printf("\nEnter name of user to search\n");
                    //__fpurge(stdin);
                    get_data(name);

                    switch (search_record(name)){
                        case -1:{
                            printf("\n\t No match found");
                            break;
                        }
                        case -2:{
                            printf("\n\tNo record found");
                            break;
                        }
                        case 0:{
                            printf("\n\tsearch successful");
                            break;
                        }
                        default:
                            printf("\n\tERROR");

         
                                 
                    }
                }
                else if(record_count ==0 ){
                    printf("\n\tNo record found");
                }
                break;
            }

            case EXIT: {
                exit(0);
                break;
            }

            default:
                printf("\n\tEnter option not available");
        }



    }
}