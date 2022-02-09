
SRC = add_record.c search_record.c delete_record.c display_record.c telecom_billing.c utility.c
INC = telecom_billing.h delete_record.h display_record.h add_record.h search_record.h record.h
target : $(SRC) $(INC)
	gcc $(SRC) $(INC) -o all.out

run: target
	./all.out

clean: 
	rm all.out