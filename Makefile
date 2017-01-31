all: get_error_msgs

get_error_msgs: get_error_msgs.c
	gcc get_error_msgs.c -Wall -g -o get_error_msgs

run:
	./get_error_msgs

clean:
	rm get_error_msgs
